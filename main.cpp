#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char student[5][20];
    double marks[5][5];
    double sum[5]={0};
    double average[5]={0};
    int top=0;

    for(int i=0;i<5;i++){
  cout<<"Enter student name "<<i+1<<": ";
    cin.getline(student[i],20);}
 for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
 cout<<"Enter "<<student[i]<<"'s Mark"<<j+1<<" : ";
cin>>marks[i][j];
cin.ignore();
 sum[i]=sum[i]+marks[i][j];

}
 average[i]=sum[i]/5;}
   cout<<"Name"<<setw(23)<<"Mark1"
   <<setw(8)<<"Mark2"<<setw(8)<<"Mark3"
   <<setw(8)<<"Mark4"<<setw(8)<<"Mark5"
   <<setw(8)<<"Total"<<setw(10)<<"Average"<<setw(8)<<endl;
   
   for(int i=0;i<5;i++){
    
     cout<<left<<setw(20)<<student[i]<<setw(8)<<marks[i][0]
     <<setw(8)<<marks[i][1]<<setw(8)<<marks[i][2]
     <<setw(8)<<marks[i][3]<<setw(8)<<marks[i][4]
     <<setw(8)<<sum[i]<<setw(10)<<average[i]<<endl;
    }
    for(int i=1;i<5;i++){
        if(average[i]>average[top])top=i ;

    }
   cout<<"top student is "<<student[top];
return 0;
}