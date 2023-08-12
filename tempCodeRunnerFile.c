#include <stdio.h>

//Tenzing and Tsundo card game

int main()
{
    int t,n,m,i,j,k,a[100],b[100],c[100],flag[100];
    //Taking input for turns
    scanf("%d",&t);
    
    //Taking input for monsters and ability value
    for(i=0;i<t;i++)
    {
       scanf("%d%d",&n,&m);
       
       
       for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
       for(j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
        }
         
    }
    //Counting number of living monsters 
    int n_alive=n, m_alive=m;
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            for(j=0;j<n;j++)
            {  
                if(a[j]>0 && b[k]>0)
                {
                  if(a[j]>b[k])  
                  {
                    a[j]-=b[k];
                  }

                  else if(b[k]>a[j])
                  {
                    b[k]-=a[j];
                  }

                  else
                  {
                    a[j]=b[k]=0;
                    n_alive--;
                    m_alive--;
                  }
                }
                
            }
        }

         
    }

    //Taking flag for each win or draw at every turn
    for(j=0;j<t;j++)
    {
        if(m_alive>n_alive)
        {
           flag[j]=0;
        }

        else if(n_alive>m_alive)
        {
            flag[j]=1;
        }
        else
        {
            flag[j]=-1;
        }
        
    }

    
    //Printing the result for every turn
    for(k=0;k<t;k++)
    {
        if(flag[k]==0)
        {
            printf("\nTenzing");
        }

        else if(flag[k]==1)
        {
            printf("\nTsondu");
        }

        else
        {
            printf("\nDraw");
        }
    }

} 



    




