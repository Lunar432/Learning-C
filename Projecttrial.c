#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VERTICES 5000

void generate_randomdirectedgraph(int vertice_num,int ***adjacencyMatrix)
{
  //initialize and allocate matrix
  *adjacencyMatrix = (int**) malloc(vertice_num * sizeof(int*));

  for(int i=0;i<vertice_num;i++)
  {
   (*adjacencyMatrix)[i] = (int*) calloc(vertice_num, sizeof(int));
  }

  //Seed for rand function
  srand(time(NULL));

  //Generate directed graph matrix
  for(int i=0;i<vertice_num;i++)
  {
    for(int j=0;j<vertice_num;j++)
    {
      if((rand()%2)==0)
      {
        (*adjacencyMatrix)[i][j]=1;
        (*adjacencyMatrix)[j][i]=1;
      }

      else
      {
        (*adjacencyMatrix)[i][j]=0;
        (*adjacencyMatrix)[j][i]=0;
      }

    }
  }
}

void calculateandcheck_inandoutdegree(int vertice_num,int **adjacencyMatrix,int *indegree,int *outdegree)
{
  //Calculating in and out degree
  for(int i=0;i<vertice_num;i++)
  {
    for(int j=0;j<vertice_num;j++)
    {
      if(adjacencyMatrix[i][j]==1)
      {
        indegree[i]++;
        outdegree[j]++;
      }

    }
  }

  //Finding sum 
  int sum_indegree=0 ,sum_outdegree=0;
  for(int i=0;i<vertice_num;i++)
  {
    sum_indegree = sum_indegree + indegree[i];
    sum_outdegree = sum_outdegree + outdegree[i];
  }
  printf("Sum of indegrees: %d \n",sum_indegree);
  printf("Sum of outdegrees: %d \n",sum_outdegree);

  //checking if sum of indegree and outdegree is equal
  if(sum_indegree==sum_outdegree)
    {
       printf("Sum of indegrees and outdegrees are equal\n");
    } 
  else
   {
      printf("Sum of indegrees and outdegrees are not equal\n");
   }  
}
  
// Function for freeing allocated memory
void free_adjacencyMatrix(int vertice_num,int ***adjacencyMatrix)
{
  for (int i = 0; i < vertice_num; i++) 
  {
    free((*adjacencyMatrix)[i]);
  }
  free(*adjacencyMatrix);
  *adjacencyMatrix = NULL;

}

int main()
{
  int vertice_num;
  clock_t start_time,end_time;
  double comp_time;

  //Take input for number of vertex
  printf("Enter number of vertices: ");
  scanf("%d",&vertice_num);

  //check for invalid input
  if(vertice_num < 1 || vertice_num > MAX_VERTICES)
  {
    printf("\n Invalid input!!");
    return 0;
  } 
  
  //Initialize and allocate memory for matrix and indegree outdegree
  int **adjacencyMatrix;

  int *indegree = (int*) calloc(vertice_num, sizeof(int));
  int *outdegree = (int*) calloc(vertice_num, sizeof(int));
  
  //function for generating graph
  generate_randomdirectedgraph(vertice_num,&adjacencyMatrix);

  //start of computational time count
  start_time = clock();

  //function of calculating in and out degrees of adjacency matrix
  calculateandcheck_inandoutdegree(vertice_num,adjacencyMatrix,indegree,outdegree);

  //end of computational time count
  end_time = clock();

  //computational time
  comp_time = ((double)(end_time - start_time))/ CLOCKS_PER_SEC *1000;
  

  printf("Computational time for checking equality: %.2f ms\n",comp_time);

  // Free allocated memory
  free_adjacencyMatrix(vertice_num,&adjacencyMatrix);
  free(indegree);
  free(outdegree);

  return 0;
  
}