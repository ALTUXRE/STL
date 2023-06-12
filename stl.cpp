#include<iostream>
#include<vector>
using namespace std;

int main (){
        // vector<int>v = {2,3,4,5,7,8,9,10};
// PAIR //

        /* pair < int , int > p = {1,3};
        cout << p.first << " " << p.second;

        cout << endl;

        pair <int , pair<int,int>>j = { 1 ,{2,3}};
        cout << j.first << " " << j.second.second ;

        cout << endl;

        pair <int,int>A[] = { {1,2} , {3,4} , {5,6}}; //ARRAY
        cout << A[0].second;*/


// VECTOR //

        /* vector< int > n;
        n.push_back(1);
        n.emplace_back(3);

        vector<int>v(5,200);
        vector<int>v(5);

        vector < int > v1(5,20);
        vector <int> v2(v1);

// ITERATOR //

        vector<int>:: iterator it = n.begin();
        it++;
        cout << *(it) << " ";

        it = it + 2;
        cout << *(it) << " ";

        vector<int>::iterator bt = n.end();*/

        /** vector<int> v = {1,2,3,4};
        cout << v[3];*/
    
   
 // AUTO - function automatically desides the data type of the input //

        //for(auto it = v.begin(); it!=v.end();it++){
        //  cout << *(it) << " ";
        // }
    // OR
       /* for(auto it : v){
        cout << it << " ";*/

    
// ERASE //

        /*v.erase(v.begin()+4,v.begin()+6); // erase from beginning
        cout << it << " ";*/
    
// INSERT //

       /* vector<int>v(2,100);  // {100,100}
        v.insert(v.begin(),300);  // {300,100,100}
        v.insert(v.begin()+2,300); // {100,100,300}
        v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

        cout << v.size(); // returns size

        v.pop_back(); // pops out last element

        cout << v.empty(); // checks empty or not */       
    
// LIST //

       /* list<int> ls;

        ls.push_back(2); //{2}
        ls.emplace_back(4); //{2,4}

        ls.push_front(5); // {5,2,4}
        ls.emplace_front(6); // {6,5,2,4}

        // rest same as vector
        // begin , end , rend , clear , insert , size , swap */


// DEQUE //

        /*deque<int> d;
         same as list and vector


// STACK //

        // LIFO = LAST IN FIRST OUT

        stack<int> st;
        st.push(5); {5}
        st.push(8); {6,5}
        st.push(9); {9,6,5}
        
        cout << st.top(); 9
        cout << st.size(); 3
        cout << st.pop(); {6,5}
        cout << st.empty();


// QUEUE //

        FIFO = FIRST IN FISRT OUT 
        queue<int>q;
        q.push(1);
        q.push(2);
        q.push(3);{1,2,3}

        q.back() += 5; 
        cout << q.back(); prints 8
        cout << q.front() prints 1
        cout << q.pop(); prints {2,9}
        cout << q.front() prints 2
        



}
