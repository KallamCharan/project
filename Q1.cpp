#include<iostream>
using namespace std;
class student
{
public:
int pen,paper,question_paper;
student(int pen,int paper,int question_paper)
{
this->pen=pen;
this->paper=paper;
this->question_paper=question_paper;
}
};
class teacher
{
public:
int pen,paper,question_paper;
teacher(int pen,int paper,int question_paper)
{
this->pen=pen;
this->paper=paper;
this->question_paper=question_paper;
}

};
int main()
{
student obj1(1,0,0),obj2(0,1,0),obj3(0,0,1);
teacher t1(10,10,10);
int n=1;
int choice;
cout<<"Enter your choice of resource allocation.\t 1)321 2)231 3)132 4)312 5)213\n";
cin>>choice;
switch(choice)
{
case 1:
while(n<2)
{
t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to S1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to S1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;
n++;
}
break;
case 2:
while(n<10)
{
t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;


t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to Student 1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to Studnet 1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;
n++;

}
break;
case 3:
while(n<20)
{
t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;

t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to Student 1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to Studnet 1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;
n++;

}
break;
case 4:
while(n<10)
{
t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to Student 1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to Studnet 1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;
n++;

}
break;
case 5:
while(n<10)
{

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;

t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to Student 1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to Studnet 1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;

n++;

}
break;
case 6:
while(n<10)
{
t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 2\n";
obj2.pen=obj2.pen+1;
cout<<"Teacher has now given the question paper to Studnet 2\n";
t1.question_paper=t1.question_paper-1;
obj2.question_paper=obj2.question_paper+1;
if(obj2.paper+obj2.pen+obj2.question_paper==3)
cout<<"Student 2 has completed his/her assignment\n\n";
obj2.pen=obj2.pen-1;t1.pen=t1.pen+1;
obj2.question_paper=obj2.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.paper=t1.paper-1;
cout<<"Teacher is giving paper to Student 1\n";
obj1.paper=obj1.paper+1;
cout<<"Teacher has now given the question paper to Studnet 1\n";
t1.question_paper=t1.question_paper-1;
obj1.question_paper=obj1.question_paper+1;
if(obj1.paper+obj1.pen+obj1.question_paper==3)
cout<<"Student 1 has completed his/her assignment\n\n";
obj1.paper=obj1.paper-1;t1.paper=t1.paper+1;
obj1.question_paper=obj1.question_paper-1;t1.question_paper=t1.question_paper+1;

t1.pen=t1.pen-1;
cout<<"Teacher is giving pen to Student 3\n";
obj3.pen=obj3.pen+1;
cout<<"Teacher has now given the paper to Studnet 3\n";
t1.paper=t1.paper-1;
obj3.paper=obj3.paper+1;
if(obj3.paper+obj3.pen+obj3.question_paper==3)
cout<<"Student 3 has completed his/her assignment\n\n";
obj3.pen=obj3.pen-1;t1.pen=t1.pen+1;
obj3.paper=obj3.paper-1;t1.paper=t1.paper+1;
n++;

}
break;
}
return 0;
}
