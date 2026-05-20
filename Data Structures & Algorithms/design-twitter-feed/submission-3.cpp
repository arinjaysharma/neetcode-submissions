class Twitter {
public:
unordered_map<int,int> tweetIdTracker ;
unordered_map< int, vector<pair<int, int>> > userTweets ; 
unordered_map<int,unordered_set<int>>  userFollowers ; 
int globalTracker; 
int rank; 

    Twitter() {
        rank = 10 ; 
        globalTracker = 1; 
        
    }
    
    void postTweet(int userId, int tweetId) {
        userTweets[userId].push_back({globalTracker,tweetId});
         globalTracker++; 
        
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ; 
        for(auto tweet: userTweets[userId])   
         {
        pq.push({tweet.first, tweet.second});
        if(pq.size()>rank)
        {
            pq.pop();
        }
        }
        for(auto follower : userFollowers[userId] )
        {
        for(auto tweet: userTweets[follower])    {
        pq.push({tweet.first, tweet.second});
        if(pq.size()>rank)
        {
            pq.pop();
        }
                }
        }
    vector<int> output; 
    while(!pq.empty())
    {
        output.push_back(pq.top().second); 
        pq.pop();
    }
    reverse(output.begin(), output.end());

return output; 
    }   
    
    void follow(int followerId, int followeeId) {
        if(followerId == followeeId)
        {
            return;
        }
        userFollowers[followerId].insert(followeeId);
    
        
    }
    
    void unfollow(int followerId, int followeeId) {  
         if(followerId == followeeId)
        {
            return;
        }
        userFollowers[followerId].erase(followeeId);

        
    }
};
