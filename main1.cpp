#include<iostream>
using namespace std;

int main1()
{
    int array_1[10], array_2[10], merged[10];
    int i=0, j=0, k=0;
    int a,b,c;
    cout<<"Enter the size for first array : ";
    cin>>a;
    cout<<" Enter elements for first array : ";
    for (i = 0; i<a; i++)
    {

        cin>> array_1[i];
    }
    cout<<"Enter the size for second array : ";
    cin>>j;
    cout<<"Enter elements for second array : ";
    for (i = 0; i<b; i++)
    {
        cin>>array_2[i];
    }
    i = 0;
    while (i< a&&j <b)
    {
        if(array_1[i]< array_2[j])
        {
            merged[k++] = array_1[i++];
        }
        else{merged[k++] = array_2[j++];
        }
} while(i<a)
{
    merged[k++] = array_2[j++];
}
cout<<"Merged array is : ";
for(k = 0; k<a+b; k++)
{
    cout<<merged[k]<<endl;
}
cout<<endl;
cout<<"This is reverse array : ";
for(int k = 12; k>= 0; k--)
{
    cout<<merged[k]<<endl;
}
return 0;
}
