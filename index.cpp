TECHNICAL SECTION 

solution for the question 1

ques:1
take input as an array of 100 nos. in an array n[]
now take a pair<int,int>a[101].
assign all a.first to 0 and a.second to each input no.
for(int i=0;i<100;i++)
a[n[i]].first++;
sort(a.begin(),a.end());
cout<<a[100].second;
