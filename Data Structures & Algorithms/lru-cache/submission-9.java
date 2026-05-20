class LRUCache {

 HashMap<Integer, Integer> cache;
ArrayList<Integer> order;
    private int mapCapacity; 


    public LRUCache(int capacity) {
        this.mapCapacity = capacity; 
        this.cache = new HashMap<Integer,Integer>(); 
        this.order = new ArrayList<>(); 
        
    }
    public void trackUsage(int key)
    {
        if(order.contains(key))
        {
            order.remove(Integer.valueOf(key));  // Remove from current position
            order.add(key);                       // Add to end
        }
        else{
            order.add(key); 
        }
           System.out.println("Order: ");
        for(int x : order)
        {
            System.out.print(""+x+" "); 
        }
        System.out.println(""); 
     

     

    }
    
    public int get(int key) {
        if(this.cache.containsKey(key))
        {
            trackUsage(key); 
        System.out.println("Cache hit for key:"+key); 

            return cache.get(key);
        }
                System.out.println("Cache miss for key:"+key); 

        return -1; 
        
    }
    
    public void put(int key, int value) {
        //check current capacity firsts
                if(this.cache.containsKey(key))
{
            this.cache.put(key,value);
                        order.remove(Integer.valueOf(key));  // Remove from current position
            order.add(key);                       // Add to end


}
else{
        if(cache.size()==mapCapacity)
        {
            System.out.println("Evicting cache as capacity:"+mapCapacity+" is full and need to add"+key); 
            evictLRU();
        }
    trackUsage(key); 

        this.cache.put(key,value);
        
    }
    }
    public void evictLRU()
    {int key = order.get(0); 
        System.out.println("Evicting "+key);
                System.out.println("ORrder bfore evicting: "+key);

        for(int x : order)
        {
            System.out.print(""+x+" "); 
        }
        System.out.println(""); 
        cache.remove(key);
            order.remove(Integer.valueOf(key));  // Remove from current position
 System.out.println("ORrder after evicting: "+key);

        for(int x : order)
        {
            System.out.print(""+x+" "); 
        }

    }
}