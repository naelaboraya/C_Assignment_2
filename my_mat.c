#include<stdio.h>
#include"my_mat.h"
#define INFINITE 9999999
#define V 10


int mat[V][V];

//A function that gets values from the user 
void userinput(){
    for (int i=0;i<V;i++){
        for (int j=0;j<V;j++){
            scanf("%d",&mat[i][j]);
            if (mat[i][j]==0&&i!=j){
                mat[i][j]=INFINITE;
            }
            else if (i==j)
                mat[i][j]=0;
        }
    }
}

int Shortest_route (int i , int j)
{
    if (i==j){
        return -1;
    }
    int dist[V][V];
  
    
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = mat[i][j];
  
   
    for (int k = 0; k < V; k++)
    {
        
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    if (dist[i][j]!=0 && dist[i][j]!=INFINITE){
        return dist[i][j];
    }
    return -1;

}

int isconnected(int i,int j){
    if (Shortest_route(i,j)!=-1){
        return 1;
}
    return 0;
}
