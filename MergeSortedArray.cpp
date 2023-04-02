//Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int>c;
        // for(int p=0;p<m;p++)
        // {
        //     c.at(p)=nums1.at(p);
        // }
        for (int i=0; i<nums1.size(); i++) 
        c.push_back(nums1[i]); 
        while(i<m&&j<n)
        {
            if(c.at(i)<nums2.at(j))
            {
            //    c.push_back(nums1.at(i));
               nums1.at(k)=c.at(i);
               i++;
               k++;
            }
            else{
            // c.push_back(nums2.at(j));
            nums1.at(k)=nums2.at(j);
            k++;
            j++;
            }
        }
        while(i<m)
        {
            // c.push_back(nums1.at(i));
            nums1.at(k)=c.at(i);
            i++;
            k++;
        }
        while(j<n)
        {
            // c.push_back(nums2.at(j));
            nums1.at(k)=nums2.at(j);
            k++;
            j++;
        }
    }
};