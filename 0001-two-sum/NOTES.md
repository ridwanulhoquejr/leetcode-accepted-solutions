- **mp.find(target - nums[i]** will check the hashmap keys that, is it exist in the key.
- if not then we add the key of the map with current element of the array and value of the key with current loop index;
- mp[nums[i]] = i;
- if we found the difference in the map key, then return the mp[target - nums[i]] which is the founded key in map.