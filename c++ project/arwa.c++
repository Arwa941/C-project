#include <iostream>
#include<cmath>
using namespace std;
//prob 1 add
//prob 1 add
int add(long long num1,long long num2)
{
    long long sum=0;
    sum=num1+num2;
    return sum;
}
int main()
{
    long long num1,num2;
    cin>>num1>>num2;
    cout<<add(num1,num2);

    return 0;
}
//prob 2 print
void print(int s)
{
        for(int i=1;i<=s;i++)
       {

       cout<<i;
        if(i!=s) cout<<" ";
       }
}
int main()
{
    int s;
    cin>>s;
    print(s);

}
//prob 5 swapping
void swaping (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swaping(a,b);
}
//prob 4 prime 
bool prime(long long num)
{
    long long mid_num=sqrt(num);
    int found=0;
   // if(num<=1) cout<<"NO";
    for(long long i=2;i<=mid_num;i++){
        if(num%i==0)
        {
            found=1;   //not prime
            break;
        }
    }
    return found;
}
int main()
{
    int test_case;cin>>test_case;
    while(test_case--)
    {

        long long num;cin>>num;
        if(num==1)
        {cout<<"NO"<<endl;
        continue;}
        else if(prime(num)==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
//prob 7 max and min
int maximum(int arr[],int length)
{
    int maxi;
    maxi=arr[0];
    for(int i=1;i<length;i++)
    {
        if(arr[i]>maxi)
           {
               maxi=arr[i];
           }
    }
    return maxi;
}
int minimum(int arr[],int length)
{
    int mini;
    mini=arr[0];
    for(int i=1;i<length;i++)
        if(arr[i]<mini)
    {
         mini=arr[i];
    }
    return mini;
}
int main()
{
    int n;cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<minimum(arr,n)<<" ";
    cout<<maximum(arr,n);
}
//prob 6 equation
long long equ(int n1,int n2)
{
    long long res=0;
    for(long long i=2;i<=n2;i+=2)
        res+=pow(n1,i);

    return res;
}
int main()
{
    long long n1,n2;cin>>n1>>n2;
    cout<<equ(n1,n2);
}
/*#include<iostream>
#include<string>
#include<cmath>
using namespace std;*/

/*nt main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    cin>>r>>c;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    cout<<"  jydj";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>b[i][j];
     cout<<"sum";
     for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    sum[i][j]=a[i][j]+b[i][j];
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cout<<sum[i][j];
}*/
/*int main()
{
    int n,first,last,a,b,digits,nn;
    cin>>n;     //2345
    digits=log10(n);    //3
    first=n/pow(10,digits);    //2
   // cout<<first;
    last=n%10;     //5
    cout<<last;
    a=first*pow(10,digits);   //2000
    //cout<<a;
    b=n%a;  //345
    n=b/10;   //34
    nn=last*(pow(10,digits))+(n*10+first) ;                //5000
}*/
/*bool lin(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {if(arr[i]==x) return true;}
     return false;
}
int main()
{
    int arr1[]={1,4,5,8,7};int arr2[]={3,4,7,9};int arr3[]={3,4,7,8,9,10};
    for(int i=0;i<5;i++)
    if(lin(arr2,4,arr1[i])==true && lin(arr3,6,arr1[i])==true) cout<<arr1[i]<<" ";
}*/
/*int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
int closesum=10000;
int in1,in2;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j) continue;
        if(abs(arr[i]+arr[j])<abs(closesum))
        {
            closesum=arr[i]+arr[j];
            in1=i;
            in2=j;
        }
    }
}
cout<<arr[in1]<<" "<<arr[in2];
}*/
/*void sort(int arr[],int length)
{
    int temp,smallest,min,index;
    for(index=0;index<length;index++)
    {   
        //Finding the smallest element in the unsorted part of the array  
        smallest=index;     //virtual
        for(min=index;min<length;min++)     // min is important
        if(arr[min]<arr[smallest]) 
        smallest=min;
         // step swapping
        temp=arr[smallest];
        arr[smallest]=arr[index];
        arr[index]=temp;
    }
}
int main()
{
    int arr[8]={1,2,4,6,3,7,8};
    sort(arr,8);   //sort  array
    int c=arr[0];
    for(int i=0;i<7;i++)
     if(arr[i]!=c) 
     {
        cout<<c;
        break;
     }
     else c++;
}*/
/*void sort(int arr[],int length)
{
    int temp;
    int ooo;
    int loc;
    for(int ooo=1;ooo<length;ooo++)
    if(arr[ooo]<arr[ooo-1])
    {
        temp=arr[ooo];
        loc=ooo;
    }
    do{
        arr[loc]=arr[loc-1];
        loc--;
    } while(loc<0&& arr[loc-1]>temp)
}
*/
/*void sort(int arr[],int length)
{
    int temp,smallest,min,index;
    for(index=0;index<length;index++)
    {   
        //Finding the smallest element in the unsorted part of the array  
        smallest=index;     //virtual
        for(min=index;min<length;min++)     // min is important
        if(arr[min]<arr[smallest]) 
        smallest=min;
         // step swapping
        temp=arr[smallest];
        arr[smallest]=arr[index];
        arr[index]=temp;
    }*/
/*
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}*/

/*int jump(int arr[],int length,int x)
{
    int left=0;
    int step=sqrt(length);
    int right=sqrt(length);
    while(arr[right]<=x &&right<length)
    {
        left=right;
        right=right+step;
        if(right>length-1)
        right=length;
    }
    for(int i=left;i<right;i++)
    if(arr[i]==x) return i;
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cin>>item;
    cout<<jump(arr,n,item);
}
*/
/*int binary(int arr[],int length,int x)
{
    int first=0;
    int last=length-1;
    int mid;
    bool found =false;
    while(first<=last && !found)
    {
        mid=(last+first)/2;
        if(arr[mid]==x) found=true;
        else if(arr[mid]<x) first=mid+1;
        else last=mid-1;
    }
    if(found)  return mid;
    else return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cin>>item;
    cout<<binary(arr,n,item);
}
*/
/*int search(int arr[],int length,int x)
{
    int loc;
    bool found=false;
    for(loc=0;loc<length;loc++)
    if(arr[loc]==x)
    {
        found=true;
        break;
    }
    if (found) return loc;
    else return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cin>>item;
    cout<<search(arr,n,item);
}*/
/*void bubblesort(int arr[],int size)
{
    int iteration;
    int index;
    int temp;
    for(iteration=1;iteration<size;iteration++)
    {
        for(index=0;index<size-iteration;index++)
        
            if(arr[index]>arr[index+1])
            {
                temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp;
            }
        
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    
        cin>>arr[i];
    
    //int item;
    //cin>>item;
   bubblesort(arr,n);
    for(int i=0;i<n;i++)
    
        cout<<arr[i]<<" ";
    
    return 0;
}*/
/*int sequentialsearch(int arr[],int size,int item)
{
   int loc;
   bool found=false;
   for(loc=0;loc<size;loc++)
   {
    if(arr[loc]==item)
    {
        found=true;
        break;
    }
   }
   if(found==true) return loc;
   else return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int item;
    cin>>item;
    cout<<sequentialsearch(arr,n,item);
    //for(int i=0;i<n;i++)
    //{
    //    cout<<arr[i]<<" ";
    //}
    //return 0;
}*/
/*void sort(*p,size)
{
  int index;int iteration;int temp;
  for(iteration=0;iteration<size;iteration++)
  {
    for(index=0;index<size-iteration;index++)
    {
        if(arr[index]>arr[index+1])
        {
           temp=arr[index];
           arr[index]=arr[index+1];
           arr[index+1]=temp;
        }    
        }
}
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
/*int main()
{
    int arr[5]={};
    int *p;
    p=arr;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>*(p+i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<"The "<<i+1<<" element of the array is: "<<(p+i)<<endl;
    }
}*/
/*void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=4;
    int y=9;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}*/



/*int arr[5]={1,2,3,4,5};
int *p;
p=arr;
for(int i=0;i<5;i++)
{
cout<<*(p+i)<<endl;
//p++;*/

/*int x=9;
int *p=&x;
//cout<<*x<<endl;  //9
//cout<<x<<endl; //add
//cout<<*&x<<endl; //9
cout<<&p;  //add*/








//****** searching algorithms******
/*int linear_search(int arr[],int n,int search_item)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search_item)
            return i;
    }
    return -1;
}
int main()
{
    int n;cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;cin>>search_item;
    cout<<linear_search(arr,n,search_item);
}*/

/*int sequential_search(int arr[],int n,int search_item)
{
    bool found=false;
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==search_item)
        {
            found=true;
            break;
        }
    }
    if(found)
        return i;
        else
        return -1;
}*/
/*int jump_search(int arr[],int n,int search_item)
{
    int step=sqrt(n);        //n=6,const step=sqrt 6
    int newstep=sqrt(n);     //variable step its initial value  is sqrt of n
    int l=0;                 //
    while(arr[newstep]<=search_item && newstep<n-1)    //
    {
        l=newstep;
        newstep=newstep+step;
        if(newstep>=n-1)
        newstep=n;
        }

        for(int i=l;i<newstep;i++)
        if(arr[i]==search_item) 
        return i;
        return -1;
}
    
    int main()
{
    int n;cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;cin>>search_item;
    cout<<jump_search(arr,n,search_item);
}*/
/*int main()
{
  
    int arr[5]={1,2,3,4,5};
    int search_item;cin>>search_item;
    cout<<sequential_search(arr,5,search_item);
}
int binary_search(int arr[],int n,int  search_item)
{
    int first=0;int mid;int last=n-1;bool found=false;
    while(first<=last&&!found)
    {
        mid=(first+last)/2;
        if(arr[mid]==search_item) found=true;
        else if(arr[mid<search_item]) first=mid+1;
        else last=mid-1;
    }
    if(found) return mid;
    else return -1;
}
int main()
{
    int n;cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;cin>>search_item;
    cout<<binary_search(arr,n,search_item);
}*/


















/*int jumpsearch(int arr[],int l,int item)
{
    int first=0;
    int conststep=sqrt(l);
    int step=sqrt(l);
    while(arr[step]<item && step<l-1)
    {
        first=step;
        step=conststep+step;
        if(step>=l-1) 
        step=l;
    }
for(int i=0;i<step;i++)

   if(arr[i]==item) 
    return i;
    return -1;
}
    int main()
{
    int l;cin>>l;
    int item;cin>>item;
    int arr[l];
    for(int i=0;i<l;i++)
    cin>>arr[i];
cout<<jumpsearch(arr,l,item);
}*/
/*void bubble_sort(int arr[],int length)
{
    int temp;
    int iteration;
    int index;
    for(iteration=1;iteration<length;iteration++)
    {
        for(index=0;index<length-iteration;index++)
        {
            if(arr[index]>arr[index+1])
            {
                temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp;
            }
        }
    }
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubble_sort(arr,n);
      for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}*/
/*int linear_search(int arr[],int n,int search_item)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search_item)
            return i;
    }
    return -1;
}
int main()
{
    int n;cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;cin>>search_item;
    cout<<linear_search(arr,n,search_item);
}*/


























/*int jumpsearch(int arr[],int length,int search_item)
{
    int first=0;
    int step_vari=sqrt(length); // variable step = square root of length
    int step=sqrt(length); // fixed step
    while(arr[step_vari]<=search_item &&step_vari<length) // exit loop if 
    {
        first=step_vari;
        step_vari=step_vari+step;
        if(step_vari>length-1)
        step_vari=length;
    }
    for(int i=first;i<step_vari;i++)
    
        if(arr[i]==search_item)
        return i;
        return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;
    cin>>search_item;
   cout<< jumpsearch( arr,n,search_item);
}*/
//q1

//q2
/*void selection_sort(int arr[],int length)
{
    int temp;
    int index; //i
    int smallestindex; //actuall
    int minindex;  //virtual
    for(index=0;index<length;index++)
    {
       smallestindex=index; //suppose first element of  array is the smallest one.
       for(minindex=index;minindex<length;minindex++)   
       
         if(arr[smallestindex]>arr[minindex])     //if we find any thing which is greater
         smallestindex=minindex; 
                                   //swap between  them and make that element as the smallest one
        temp=arr[smallestindex];  
       arr[smallestindex]=arr[index];
       arr[index]=temp;
       
    }
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selection_sort(arr,n);
      for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}*/
//q3
/*void insertion_sort(int  arr[],int length)
{

}*/
//q4
/*void selection_sort(string arr[],int n)
{
    string temp;
    int index;
    int minindex;
    int smallestindex;
    for(index=0;index<n;index++)
    {
       smallestindex=index;
       for(minindex=index;minindex<n;minindex++)
       {
        if(arr[smallestindex]<arr[minindex])  //swap
        smallestindex=minindex;
        temp=arr[smallestindex];
        arr[smallestindex]=arr[minindex];
        arr[minindex]=temp;
       }
    }
}
int main()
{
    int n;cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selection_sort(arr,n);
      for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
}
*/
//q5 ,q6
/*void bubble_sort(int arr[],int length)
{
    int temp;
    int iteration;
    for(iteration=1;iteration<length;iteration++)
    {
        for(int i=0;i<length-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int binary_search(int arr[],int length,int search_item)
{
    int first=0;
    int last=length-1;
    int mid;
    bool found=false;
    while(first<=last&& !found)
    {
        mid=(first+last)/2;
        if(arr[mid]==search_item)
        {
            found=true;
        }
        else if(arr[mid]<search_item)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    if(found) 
    return mid;
    else 
    return -1;
}

int main()
{
    int arr[]={9, 1, 5, 10, 2, 300, 3, 45, 1, -30, -23};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n); // successful sort
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    int search_item;
    cin>>search_item;
    cout<<binary_search(arr,n,search_item);
    
}
*/
//q5,q6
/**/
/*int repeat(int arr[],int n)
{
    bool found=false;
   // int repeat_elemnt=arr[0];
    while(found==false)
    {
        int repeat_elemnt=arr[0];
        for(int i=1;i<=n;i++)
        {
        if(arr[0]==arr[i])
        {
            repeat_elemnt=arr[i];
            found=true;
        }
       // return repeat_elemnt;
    }
     if(found)
    return repeat_elemnt;
    else
    return -1;
    }
    //if(found)
   // return repeat_elemnt;
    //else
    //return -1;
    
}

int main()
{
    int arr[]={9, 1, 5, 10, 2, 300, 3, 45, 1, -30, -23};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<repeat(arr,n);
}*/
//q8
//q9
/*int main()
{
    int a;
    cin>>a;
    int arr[a]={};
    for(int i=0;i<a;i++)
        cin>>arr[i];
    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
}*/
/*void bubble_sort(int arr[],int length)
{
    int temp;
    int iteration;
    int index;
    for(iteration=1;iteration<length;iteration++)
    {
        for(index=0;index<length-iteration;index++)
        {
            if(arr[index]>arr[index+1])
            {
                temp=arr[index];
                arr[index]=arr[index+1];
                arr[index+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={1,60,-10,70,-80,85,90};
    bubble_sort(arr,7);
    for(int i=0;i<7;i++)
    {
        for(int j=6;j<i;j++)
        {
           int sum=arr[i]+arr[j];
           if()
        }
    }
}*/
/*int main()
{
    int arr[10]={1,4,5,8,7,3,7,6,9,5};
    int arr1[]={};
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j]);
            cout<<arr[i];
        }
    }
}*/


















/*int main()
{
    int arr[]={5,4,7,6,2,1,3};
    for(int i=0;i<7;i++)
    {
        for (int j=i;j<=7;j++)
        {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    int c=arr[0]; 
    for(int i=0;i<=7;i++)
    {
        if(arr[i]!=c)
        {
            cout<<c;
            break;
           // else c++;
        }
        else c++;
    }
}*/
/*int binary(int list[],int length,int item)
{
    int first;
    int mid;
    int last=length-1;
    bool found=false;
    while(first<=last && !found)
    {
      mid=(first+last)/2;
      if(list[mid]==item)
      found=true;
      else if(list[mid]>item)
      last=mid-1;
      else first=mid+1;
    }
    if (found) return mid;
    else return -1;
}
int main()
{
    int n;cin>>n;
    int list[n]={};
    for(int i=0;i<n;i++)
    cin>>list[i];
    int search;
    cin>>search;
    cout<<binary(list,n,search);

}*/
/*int seqsearch(int arr[],int length,int item)
{
    int loc;
    bool found=false;
    for(loc=0;loc<length;loc++)
    
    
        if(arr[loc]==item)
        {
            found=true;
            break;
        }
        if(found)
        return loc;
        else 
        return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search_item;cin>>search_item;
    cout<<seqsearch(arr,n,search_item);

}*/

/*int main()
{
    long long n;cin>>n;
    long long i;
    if(n==1)
        cout<<"-1";
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
}*/
/*int main()
{
    long long x=1999;
    //int test_cases=1;
    long long i;
    //while(test_cases--)
   // {
        for(i=0;i<x;i++)
        {
        long long number;
       // cout<<endl;
        cin>>number;
        if(number !=x)
        cout<<"Wrong"<<endl;
        else 
        {
        cout<<"Correct"<<endl;
        break;
        }
        }
   // }
}*/














/*int search(int list[],int list_lengh,int search_item)
{
    int loc;
    bool found = false;
    for(loc=0;loc<list_lengh;loc++)
    if(list[loc]==search_item)
    {
        found=true;
        break;
    }
    if(found)
    return loc;
    else 
    return -1;
}
int main()
{
    int list[5]={1,2,3,4,5};
    cout<<search(list,5,9)<<endl;
    return 0;
}*/

/*void sort(int list[],int length)
{
    int temp;
    int iteration;
    int index;
    for(iteration=1;iteration<length;iteration++)
    {
        for(index=0;index<iteration-1;index++)
        {
            if(list[index]>list[index+1])
            {
                temp=list[index];
                list[index]=list[index+1];
                list[index+1]=temp;
            }
        }
    }
}
int main()
{
    int list[5]={7,3,11,8,44};
    sort(list,5);
    for(int i=0;i<5;i++)
    cout<<list[i]<<" ";
    return 0;
}*/


//Q1
/*int main()
{
    int x=5;
    int y=9;
    int z=12;
    cout<<&x<<" "<<&y<<" "<<&z;
   // swap(&x,&y);
}*/
//Q2
/*int main()
{
    int n;
    cin>>n;
    int array[n]={};
    for(int i=0;i<n;i++)
    {
    cin>>*(array+i);
    }
    for(int i=0;i<n;i++)
    {cout<<*(array+i)<<" ";}
    return 0;
}*/

//Q3, Q4,
/*int main()
{
    int n;cin>>n;
    int i;
    int array[n]={};
    int *p=array;
    cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
    //for(i=0;i<n;i++)
    //{
    //    cin>>*p;
    //    p++;
    //}
   // for(i=0;i<n;i++)
   // {
    //cout<<array[i]<<endl; 
    //break;
    //}
    for(i=n;i>0;i--)
    cout<<*(p+i)<<endl;
    return 0;
}*/

//Q5
/*void * sort(int *p,int size)
{
    int iteration;
    int index;
    int temp;
    for(iteration =1;iteration<size;iteration ++)
    {
        for(index=0;index<iteration-1;index++)
        {
            if(*(p+index)>*(p+index+1))
            {
                temp=*(p+index);
                *(p+index)=*(p+index+1);
                *(p+index+1)=temp;
            }
        }

    }
}

int main()
{
    int array[5]={7,3,11,8,44};
    for(int i=0;i<5;i++)
    cout<<*sort(array,5)<<endl;
    return 0;
}*/

//Q7,Q8;
/*int search(int list[],int list_length,int item_search)
{
    int loc;
    bool found=false;
    for(loc=0;loc<list_length;loc++)
    if(list[loc]==item_search)
    {
        found=true;
        break;
    }
    if(found)
    return loc;
    else 
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int list[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }
    int item_search;
    cin>>item_search;
    cout<<search(list,n,item_search)<<endl;
}*/
/*int *sortp(int *p, int n)
{

    for (int i=0; i<n;i++){
        for(int j=i+1;j<n;j++)
        if ((p+j)<(p+i)){
           int temp= *(p+j);
           *(p+j)=*(p+i);
           *(p+i)=temp;
        }

    }
    return p;
}
int main()
{
   int arr[10]={2,5,88,9,1,100,3,7,8,10} ;

   int *p=sortp(arr,10);
   for ( int k=0;k<10;k++)
    cout<<*(p+k)<<endl;
   
}*/
/*int binarysearch(int arr[],int length,int search_item)
{
    int first=0;  //index of first element
    int mid; //index of mid
    int last=length-1;  //index of last 
    bool found=false;
    while(first<=last && !found)
    {
        mid=(first+last)/2;
        if(arr[mid]==search_item)
        found=true;
        else if(arr[mid]>search_item)
        last=mid-1;
        else
        first=mid+1;
    }
    if(found)
    return mid;
    else return -1;
}
int main()
{
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int search_item;
    cin>>search_item;
   cout<<binarysearch(arr,n,search_item);
}*/
// code for jump search


/*int jumpsearch(int arr[],int length,int search_item)
{
    int first=0;
    int step_vari=sqrt(length); // variable step = square root of length
    int step=sqrt(length); // fixed step
    while(arr[step_vari]<=search_item &&step_vari<length) // exit loop if 
    {
        first=step_vari;
        step_vari=step_vari+step;
        if(step_vari>length-1)
        step_vari=length;
    }
    for(int i=first;i<step_vari;i++)
    
        if(arr[i]==search_item)
        return i;
        return -1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int search_item;
    cin>>search_item;
   cout<< jumpsearch( arr,n,search_item);
}*/
/*int linearsearch(int arr[],int length,int search_item)
{
    for(int i=0;i<length;i++)
    
        if(arr[i]==search_item) 
        return i;
       // else 
       return -1;

}
int main()
{
    int n; cin>>n;
    int arr[n]={};
    for(int h=0;h<n;h++)
    cin>>arr[h];
    int search_item;
    cin>>search_item;
    cout<<linearsearch(arr,n,search_item);
}*/
//find missing number in array
/*int main()
{
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    for (int g=0;g<n;g++)

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        cout<<i+1<<" ";
      //  break;
    }
   // cout<<endl;
    //cout<<sum-n<<endl;
    return 0;*/



















