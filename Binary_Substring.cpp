 vector<int> type(4,0);
        for(int i=0;i<n;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                type[0]++;
            }
            else if(s[i]=='0' && s[i+1]=='1')
            {
                type[1]++;
            }
            else if(s[i]=='1' && s[i+1]=='1')
            {
                type[2]++;
            }
            else
            {
                type[3]++;
            }
        }
        int ans=0;
        if(type[3])
        {
            ans=1;
            type[3]--;
        }
        ans+=2*type[0];
        if(type[1])
        {
            ans+=2;
        }
        ans+=2*(type[2]);
        if(type[3])
        {
            ans++;
        }
        cout<<ans<<endl;
