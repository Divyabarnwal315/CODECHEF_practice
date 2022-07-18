//STACK
#include <iostream>
using namespace std;
//memory kitti required hogi vo no of variables aur unke sizes p depend kregi
void fun2(int i)
{
    int a;
}
void fun1()
{
    int x;
    fun2(x);
}
void main()
{
    int a;
    float b;
    fun1();
}


//HEAP
//treated like a resource when required take otherwise release
//not unorganised
//access memory with the hhelp of pointer only
void main()
{
    int *p;
    //new means allocating memory in heap 
    //for c++
    p= new int[5];
    //for c
    p=(int*)malloc(2*5);

    delete []p;
    p=NULL;
}


//TYPES OF DATA STRUCTURE

//PHYSICAL DATA STRUCTURE
//collection of nodes always created in heap

// LOGICAL DATA STRUCTURE
//implemented using physical data structure either array or linked list or combination of both
// includes (STACK-LIFO , QUEUES-FIFO)-LINEAR, (TREES , GRAPH)-NON LINEAR ,HASH TABLE-(TABULAR)

//ADT(ABSTRACT(hiding internal details) DATA TYPE)-1]Representation of Data
//2]Operation on data
//LIST-->8,3,4,7,9,6
//       0 1 2 3 4 5
//DATA:1-space for storing element  2-capacity  3-size
//OPERATIONS IN LIST:add(x),remove(),search(key)......

//{examples of operations in list}
//add(element)/append(element)
//add(index,element)/insert(index,element)
//remove(index)
//set(index,element)/replace(index,element)
//get(index)
//search(key)/contains(key)
//sort()


//{TIME AND SPACE COMPLELXITY}

//TC
//agr for loop h to TC ->O(n)hogi
//agr 2 nested for loop h to TC->O(n^2)hogi
//agr 2 index p rhke baaki element ka dekh rhe ayse krte gye to v TC->O(n^2)ho jaegi
//agr middle element p h aur fir half me process kre fir half aur aysa krte gye jbtk 1 n aa jae to TC-log(n)

//SC
//pseudo code-1
void swap(x,y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
// O(1)


//pseudo code-2
int sum(int A[],int n)
{
    int s,i;
    //1 time
    s=0;
    //n+1 time
    for (int i = 0; i < n; i++)
    {
        //n time
        s=s+A[i];
    }
    //1 time
    return s;
}
// f(n)=2n+3
// time is O(n)


//pseudo code-3
void Add(int n)
{
    int i,j;
    //n+1 time
    for (int i = 0; i < n; i++)
    {
        //n*(n+1) time
        for (int j = 0; j < n; j++)
        {
            //n*n time
                C[i][j]=A[i][j]+B[i][j];
        }
        
    }
    return 0;
}
//time function=f(n)=2n^2+2n+1
//O(n^2) we can say order of or big O of n^2


//EXAMPLE
fun1()
{
    //n
    fun2()
}
//O(n)
fun2()
{
    //n
    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    
}