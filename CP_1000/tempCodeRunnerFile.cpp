
        int n,r,b;
        cin>>n>>r>>b;
        int no_of_r_in_a_grp= r/(b+1);
        
        int extra_r= r%(b+1);
        for(int i=0;i<(b+1);i++){