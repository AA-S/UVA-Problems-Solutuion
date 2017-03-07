#include <iostream>
#include <queue>
using namespace std;
int main()
{
priority_queue<float> q;
//insertthreeelementsintothepriorityqueue
q.push(66.6);
q.push(22.2);
q.push(44.4);
//readandprinttwoelements
cout << q.top() << " ";
q.pop();
cout << q.top() << endl;
q.pop();
//insertthreemoreelements
q.push(11.1);
q.push(55.5);
q.push(33.3);

q.pop();
//popandprintremainingelements
while (!q.empty()) {
cout << q.top() << " ";
q.pop();
}
cout << endl;
}
