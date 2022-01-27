#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct Type{
    int t, l;
};

struct compare{
    bool operator() (Type& a, Type& b){
        return a.l > b.l;
    }
};

bool operator < (Type a, Type b){
    return a.t < b.t;
}

vector<Type> v;
priority_queue<Type, vector<Type>, compare> priQ;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t, l;
        cin>>t>>l;
        Type tmp; tmp.t = t; tmp.l = l;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    long long curr_t = 0, total_t = 0;
    int ind = 0;
    while(true){
        int i;
        for(i = ind; i < n; i++){
            if (v[i].t <= curr_t)
                priQ.push(v[i]);
            else{
                ind = i;
                break;
            }
        }
        if (i == n)
            ind = n;
        if(!priQ.empty()){
            Type tmp = priQ.top();
            total_t += curr_t + tmp.l - tmp.t;
            curr_t += tmp.l;
            priQ.pop();
        }else{
            if(ind != n)
                curr_t = v[ind].t;
        }
        if(ind == n && priQ.empty())
            break;
    }
    cout<<total_t/n<<"\n";
    return 0;
}