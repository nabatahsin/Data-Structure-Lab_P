#include<string>
#include<iostream>

using namespace std;

class student
{
   public:
       int id; string name; float cgpa; int credit;
};
int main()
{
    int a = 5;
    student info[a];
    student s1;

    cout<<"Info of student: "<<endl;
    for(int i = 0; i<a; i++)
    {
        cout<<" Student ID:     "<<endl;
        cin>>info[i].id;
        cout<<"student name:          "<<endl;
        cin>>info[i].name;
        cout<<" Student CGPA:    "<<endl;
        cin>>info[i].cgpa;
        cout<<" Student CREDIT COMPLETED:  "<<endl;
        cin>>info[i].credit;

    }
    for(int i = 0; i<a, i++;)
    {
        cout<<"Student ID:     " <<info[i].id<< endl;
        cout<<"Student name:          " <<info[i].name<< endl;
        cout<<"Student CGPA:    " <<info[i].cgpa<< endl;
        cout<<"Student CREDIT COMPLETED:  " <<info[i].credit <<endl;

        return 0;

    }
}

int n, i, arr[10], j, temp;
cout<<"Enter size ";
cin>>n;
cout<<"Enter number: "<<n;
for(i = 0; i<n; i++)
    cin>>arr[i];
for(i = 0; i<n-1; j++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(arr[j] >[j+1])
            {
                temp = arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
       }
    }
    cout<<"Updated section;";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
        cout<<endl;

    return 0;





    int main()
{
    int arr[6] = {55,33,66,77,22,11};
    int min_index = 0;
    int temp = 0;

    for(int i = 0; i<6; i++)
        {
            cout<<arr[i]<<" ";
    }
    cout<<"          "<<endl;

    for(int i = 0; i<6; i++)
        {
            min_index = i;
            for(int j = i+1; j<6; j++)
            {
                if(arr[min_index] > arr[j])
                    {
                        min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
