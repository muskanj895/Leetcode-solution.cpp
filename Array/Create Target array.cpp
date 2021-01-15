vector<int> target;
        for(int i=0; i<index.size(); i++){
            //cout << nums[i];   
            target.insert (target.begin() + index[i],nums[i]);
        }
        return target;
