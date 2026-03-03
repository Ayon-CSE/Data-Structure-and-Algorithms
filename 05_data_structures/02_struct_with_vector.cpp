struct st
{
    ll a,b,pos;
};
vector<st> v;
for(int i=0;i<n;i++)
{
    st p;
    cin>>p.a>>p.b;
    p.pos=i+1;
    v.push_back(p);
}

for(int i=0; i<n; i++) {
    cout<<v[i].a<<' '<<v[i].b<<' '<<v[i].pos<<endl;
}
