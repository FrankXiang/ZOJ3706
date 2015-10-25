

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T;
    int x,y,i,j;
    int a[201] = {0};
    int t1,t2,t3,t4,t5,t6;
    int max,sum;
    scanf("%d",&T);
    while(T-->0){
        max = 0;
        sum = 0;
        scanf("%d %d",&x,&y);
        for(i=1;i<=x+y;i++) a[i]=0;
        
        for (i=1; i<=x/2; i++) {
            sum = 0;
            t1 = x-i>=y?x-i-y:y-x+i;
            t2 = x-i>=i?x-2*i:2*i-x;
            t3 = i>=y?i-y:y-i;
            t4 = x>=y?x-y:y-x;
            t5 = x-i+y>=i?x+y-2*i:2*i-x-y;
            t6 = i+y>=x-i?2*i+y-x:x-2*i-y;
            
            //printf("%d: t1:%d,t2:%d,t3:%d,t4:%d,t5:%d,t6:%d\n",i,t1,t2,t3,t4,t5,t6);
            
            
            a[i]++;
            a[x-i]++;
            a[y]++;
            a[x]++;
            a[x-i+y]++;
            a[i+y]++;
            a[x+y]++;
            a[t1]++;
            a[t2]++;
            a[t3]++;
            a[t4]++;
            a[t5]++;
            a[t6]++;
 
            
            for(j=1;j<=x+y;j++){

                if(a[j]>0){
                    sum++;
                    a[j]=0;
                }
            }
            
            if(sum>max)max = sum;
            
        }
        
        
        

        for(i=1;i<=y/2;i++){
            sum = 0;

            t1 = y-i>=x?y-i-x:x-y+i;
            t2 = y-i>=i?y-2*i:2*i-y;
            t3 = i>=x?i-x:x-i;
            t4 = x+i>=y-i?x+2*i-y:y-2*i-x;
            t5 = x+y-i>=i?x+y-2*i:2*i-x-y;
            t6 = x>=y?x-y:y-x;
            //printf("%d: t1:%d,t2:%d,t3:%d,t4:%d,t5:%d,t6:%d\n",i,t1,t2,t3,t4,t5,t6);
            
            a[i]++;
            a[y-i]++;
            a[x]++;
            a[y]++;
            a[y-i+x]++;
            a[i+x]++;
            a[x+y]++;
            a[t1]++;
            a[t2]++;
            a[t3]++;
            a[t4]++;
            a[t5]++;
            a[t6]++;
            
            for(j=1;j<=x+y;j++)
                if(a[j]>0){
                    sum++;
                    a[j]=0;
                }
            
            if(sum>max)max = sum;
        }
        
        
        
        printf("%d\n",max);
        
        
    }
    return 0;
}
