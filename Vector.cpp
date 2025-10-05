#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class ArrayDS 
{
private:
    vector<int> arr;

public:
    ArrayDS() {}

    // ============ Basic Operations ============

    void inputElements() 
    {
        int n, value;
        cout << "Enter number of elements: ";
        cin >> n;
        
        if (n <= 0) {
            cout << "Invalid number!\n";
            return;
        }

        arr.clear();
        for (int i = 0; i < n; i++) 
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> value;
            arr.push_back(value);
        }
        cout << n << " elements added successfully!\n";
    }

    void print() 
    {
        if (arr.empty()) {
            cout << "Array is empty!\n";
            return;
        }
        cout << "Array: ";
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int sum() 
    {
        int total = 0;
        for (int i = 0; i < arr.size(); i++)
            total += arr[i];
        return total;
    }

    float average() 
    {
        if (arr.empty()) return 0;
        return (float)sum() / arr.size();
    }

    int getMaximum()
    {
        if (arr.empty()) return INT_MIN;
        int maxNum = arr[0];
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] > maxNum)
                maxNum = arr[i];
        return maxNum;
    }

    int getMinimum() 
    {
        if (arr.empty()) return INT_MAX;
        int minNum = arr[0];
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] < minNum)
                minNum = arr[i];
        return minNum;
    }

    int getSecondMaximum() 
    {
        if (arr.size() < 2) {
            cout << "Need at least 2 elements!\n";
            return INT_MIN;
        }
        int maxNum = INT_MIN;
        int secondMax = INT_MIN;
        for (int i = 0; i < arr.size(); i++) 
        {
            if (arr[i] > maxNum) 
            {
                secondMax = maxNum;
                maxNum = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] < maxNum) 
            {
                secondMax = arr[i];
            }
        }
        return secondMax;
    }

    int getSecondMinimum()
    {
        if (arr.size() < 2) {
            cout << "Need at least 2 elements!\n";
            return INT_MAX;
        }
        int minNum = INT_MAX;
        int secondMin = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < minNum)
            {
                secondMin = minNum;
                minNum = arr[i];
            }
            else if (arr[i] < secondMin && arr[i] > minNum)
            {
                secondMin = arr[i];
            }
        }
        return secondMin;
    }

    int getThirdMaximum()
    {
        if (arr.size() < 3) {
            cout << "Need at least 3 elements!\n";
            return INT_MIN;
        }
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second && arr[i] < first)
            {
                third = second;
                second = arr[i];
            }
            else if (arr[i] > third && arr[i] < second)
            {
                third = arr[i];
            }
        }
        return third;
    }

    // ============ Search Operations ============

    bool search() 
    {
        int target;
        cout << "Enter the number to search: ";
        cin >> target;
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] == target) {
                cout << "Found at index: " << i << endl;
                return true;
            }
        return false;
    }

    int count() 
    {
        int target;
        cout << "Enter the number to count: ";
        cin >> target;
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] == target)
                cnt++;
        return cnt;
    }

    // ============ Delete Operations ============

    void deleteAt() 
    {
        int index;
        cout << "Enter index to delete (0 to " << arr.size()-1 << "): ";
        cin >> index;
        if (index < 0 || index >= arr.size()) 
        {
            cout << "Error: index out of range!\n";
            return;
        }
        arr.erase(arr.begin() + index);
        cout << "Element deleted successfully!\n";
    }

    void deleteMaximum()
    {
        if (arr.empty()) {
            cout << "Array is empty!\n";
            return;
        }
        int maxVal = getMaximum();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == maxVal)
            {
                arr.erase(arr.begin() + i);
                cout << "Maximum element " << maxVal << " deleted!\n";
                return;
            }
        }
    }

    void deleteMinimum()
    {
        if (arr.empty()) {
            cout << "Array is empty!\n";
            return;
        }
        int minVal = getMinimum();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == minVal)
            {
                arr.erase(arr.begin() + i);
                cout << "Minimum element " << minVal << " deleted!\n";
                return;
            }
        }
    }

    void deleteSecondMaximum()
    {
        if (arr.size() < 2) {
            cout << "Need at least 2 elements!\n";
            return;
        }
        int secondMax = getSecondMaximum();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == secondMax)
            {
                arr.erase(arr.begin() + i);
                cout << "Second maximum element " << secondMax << " deleted!\n";
                return;
            }
        }
    }

    void deleteSecondMinimum()
    {
        if (arr.size() < 2) {
            cout << "Need at least 2 elements!\n";
            return;
        }
        int secondMin = getSecondMinimum();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == secondMin)
            {
                arr.erase(arr.begin() + i);
                cout << "Second minimum element " << secondMin << " deleted!\n";
                return;
            }
        }
    }

    // ============ Insert Operations ============

    void append() 
    {
        int item;
        cout << "Enter number to append: ";
        cin >> item;
        arr.push_back(item);
        cout << "Element appended successfully!\n";
    }

    void prepend()
    { 
        int item;
        cout << "Enter number to prepend: ";
        cin >> item;
        arr.insert(arr.begin(), item);
        cout << "Element prepended successfully!\n";
    }

    void insertAt()
    {
        int index, item;
        cout << "Enter index: ";
        cin >> index;
        if (index < 0 || index > arr.size())
        {
            cout << "Invalid index!\n";
            return;
        }
        cout << "Enter value: ";
        cin >> item;
        arr.insert(arr.begin() + index, item);
        cout << "Element inserted successfully!\n";
    }

    // ============ Sorting & Checking ============

    bool isSorted() 
    {
        for (int i = 0; i < arr.size() - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }

    void bubbleSort()
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - i - 1; j++) 
            {
                if (arr[j] > arr[j + 1]) 
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "Array sorted using Bubble Sort!\n";
    }

    void selectionSort()
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < arr[minIdx])
                    minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
        }
        cout << "Array sorted using Selection Sort!\n";
    }

    void insertionSort()
    {
        for (int i = 1; i < arr.size(); i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "Array sorted using Insertion Sort!\n";
    }

    // ============ Rearrangement Operations ============

    void reverseArray()
    {
        reverse(arr.begin(), arr.end());
        cout << "Array reversed!\n";
    }

    void reverseInGroups() 
    {
        int k;
        cout << "Enter group size k: ";
        cin >> k;
        if (k <= 0) {
            cout << "Invalid group size!\n";
            return;
        }
        for (int i = 0; i < arr.size(); i += k) 
        {
            int start = i;
            int end = min((int)(i + k - 1), (int)(arr.size() - 1));
            while (start < end) 
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
        cout << "Array reversed in groups!\n";
    }

    void moveZerosToEnd()
    {
        int pos = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                arr[pos] = arr[i];
                pos++;
            }
        }
        while (pos < arr.size())
        {
            arr[pos] = 0;
            pos++;
        }
        cout << "Zeros moved to end!\n";
    }

    void rearrange()
    {
        int j = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
        cout << "Negative numbers moved to front!\n";
    }

    void rotateLeft(int k)
    {
        if (arr.empty() || k <= 0) {
            cout << "Invalid operation!\n";
            return;
        }
        k = k % arr.size();
        rotate(arr.begin(), arr.begin() + k, arr.end());
        cout << "Array rotated left by " << k << " positions!\n";
    }

    void rotateRight(int k)
    {
        if (arr.empty() || k <= 0) {
            cout << "Invalid operation!\n";
            return;
        }
        k = k % arr.size();
        rotate(arr.rbegin(), arr.rbegin() + k, arr.rend());
        cout << "Array rotated right by " << k << " positions!\n";
    }

    // ============ Advanced Operations ============

    void findMissingElements()
    {
        if (arr.empty()) {
            cout << "Array is empty!\n";
            return;
        }
        int minVal = getMinimum();
        int maxVal = getMaximum();

        cout << "Missing elements between " << minVal << " and " << maxVal << ": ";
        bool found = false;
        for (int num = minVal; num <= maxVal; num++)
        {
            bool exists = false;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] == num)
                {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                cout << num << " ";
                found = true;
            }
        }
        if (!found) cout << "None";
        cout << endl;
    }

    void countEvenOdd() 
    {
        int evenCount = 0, oddcount = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddcount++;
        }
        cout << "Even count: " << evenCount << ", Odd count: " << oddcount << endl;
    }

    void checkDuplicates()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++) 
            {
                if (arr[i] == arr[j])
                {
                    cout << "Duplicates Found: " << arr[i] << endl;
                    return;
                }
            }
        }
        cout << "No Duplicates\n";
    }

    void removeDuplicates()
    {
        if (arr.size() <= 1) {
            cout << "Array size: " << arr.size() << endl;
            return;
        }
        
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        arr = temp;
        
        cout << "Duplicates removed! New size: " << arr.size() << endl;
    }

    void twoSum() 
    {
        int target;
        cout << "Enter Target sum: ";
        cin >> target;

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] + arr[j] == target)
                {
                    cout << "Pair found: arr[" << i << "] + arr[" << j << "] = " << arr[i] << " + " << arr[j] << " = " << target << endl;
                    return;
                }
            }
        }
        cout << "No pair found that sums to " << target << endl;
    }

    int maxSubarraySum()
    {
        if (arr.empty()) return 0;
        int maxSoFar = arr[0];
        int currentMax = arr[0];

        for (int i = 1; i < arr.size(); i++)
        {
            currentMax = max(arr[i], currentMax + arr[i]);
            maxSoFar = max(maxSoFar, currentMax);
        }
        return maxSoFar;
    }

    int mostFrequent()
    {
        if (arr.empty()) return 0;
        int maxCount = 0;
        int mostFrequentNum = arr[0];

        for (int i = 0; i < arr.size(); i++)
        {
            int cnt = 0;
            for (int j = 0; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                    cnt++;
            }
            if (cnt > maxCount)
            {
                maxCount = cnt;
                mostFrequentNum = arr[i];
            }
        }
        return mostFrequentNum;
    }

    void printSubarrays()
    {
        cout << "All subarrays:\n";
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                cout << "[ ";
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << "]\n";
            }
        }
    }

    bool isPermutation(int n)
    {
        if (arr.size() != n) return false;

        vector<bool> visited(n + 1, false);

        for (int i = 0; i < arr.size(); i++)
        {
            int x = arr[i];
            if (x < 1 || x > n || visited[x])
                return false;
            visited[x] = true;
        }
        return true;
    }

    double findMedian()
    {
        if (arr.empty()) return 0;
        
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        if (temp.size() % 2 == 1)
            return temp[temp.size() / 2];
        else
        {
            int mid1 = temp[(temp.size() / 2) - 1];
            int mid2 = temp[temp.size() / 2];
            return (mid1 + mid2) / 2.0;
        }
    }

    int findMode()
    {
        if (arr.empty()) return 0;
        return mostFrequent();
    }

    void frequencyTable()
    {
        if (arr.empty()) {
            cout << "Array is empty!\n";
            return;
        }
        
        vector<bool> visited(arr.size(), false);

        cout << "\nFrequency Table:\n";
        cout << "----------------\n";
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (visited[i])
                continue;
            
            int count = 1;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = true;
                    count++;
                }
            }
            cout << arr[i] << " occurs " << count << " times" << endl;
        }
    }

    bool isPalindrome()
    {
        for (int i = 0; i < arr.size() / 2; i++)
        {
            if (arr[i] != arr[arr.size() - 1 - i])
                return false;
        }
        return true;
    }

    void subArraySum()
    {
        int target;
        cout << "Enter target sum: ";
        cin >> target;

        for (int i = 0; i < arr.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < arr.size(); j++)
            {
                sum += arr[j];
                if (sum == target)
                {
                    cout << "Subarray Found From Index " << i << " to " << j << endl;
                    return;
                }
            }
        }
        cout << "No Subarray With Given Sum" << endl;
    }

    void clearArray()
    {
        arr.clear();
        cout << "Array cleared successfully!\n";
    }

    int getSize() 
    { 
        return arr.size(); 
    }
};

// ------------------- MENU -------------------
void displayMenu() 
{
    cout << "\n============ ARRAY OPERATIONS MENU (VECTOR) ============\n";
    cout << "--- Input/Output ---\n";
    cout << "1.  Input Array Elements\n";
    cout << "2.  Print Array\n";
    cout << "3.  Clear Array\n";
    cout << "4.  Get Size\n";
    cout << "\n--- Math Operations ---\n";
    cout << "5.  Sum of Elements\n";
    cout << "6.  Average of Elements\n";
    cout << "7.  Find Maximum\n";
    cout << "8.  Find Minimum\n";
    cout << "9.  Find Second Maximum\n";
    cout << "10. Find Second Minimum\n";
    cout << "11. Find Third Maximum\n";
    cout << "\n--- Search Operations ---\n";
    cout << "12. Search Element\n";
    cout << "13. Count Occurrences\n";
    cout << "\n--- Insert Operations ---\n";
    cout << "14. Append Element\n";
    cout << "15. Prepend Element\n";
    cout << "16. Insert at Position\n";
    cout << "\n--- Delete Operations ---\n";
    cout << "17. Delete Element at Index\n";
    cout << "18. Delete Maximum\n";
    cout << "19. Delete Minimum\n";
    cout << "20. Delete Second Maximum\n";
    cout << "21. Delete Second Minimum\n";
    cout << "\n--- Sorting ---\n";
    cout << "22. Bubble Sort\n";
    cout << "23. Selection Sort\n";
    cout << "24. Insertion Sort\n";
    cout << "25. Check if Sorted\n";
    cout << "\n--- Rearrangement ---\n";
    cout << "26. Reverse Array\n";
    cout << "27. Reverse in Groups\n";
    cout << "28. Rotate Left\n";
    cout << "29. Rotate Right\n";
    cout << "30. Move Zeros to End\n";
    cout << "31. Rearrange (Negatives First)\n";
    cout << "\n--- Advanced Operations ---\n";
    cout << "32. Two Sum Problem\n";
    cout << "33. Max Subarray Sum (Kadane's)\n";
    cout << "34. Most Frequent Element\n";
    cout << "35. Find Missing Elements\n";
    cout << "36. Count Even and Odd\n";
    cout << "37. Check Duplicates\n";
    cout << "38. Remove Duplicates\n";
    cout << "39. Frequency Table\n";
    cout << "40. Check Palindrome\n";
    cout << "41. Subarray with Given Sum\n";
    cout << "42. Find Median\n";
    cout << "43. Find Mode\n";
    cout << "44. Print All Subarrays\n";
    cout << "45. Check if Permutation\n";
    cout << "\n0.  Exit\n";
    cout << "========================================================\n";
    cout << "Enter your choice: ";
}

int main() 
{
    ArrayDS a;
    int choice;
    
    cout << "====== Welcome to Array Data Structure Program (Vector) ======\n";
    
    do {
        displayMenu();
        cin >> choice;
        
        switch(choice) {
            case 1: a.inputElements(); break;
            case 2: a.print(); break;
            case 3: a.clearArray(); break;
            case 4: cout << "Size: " << a.getSize() << endl; break;
            case 5: cout << "Sum: " << a.sum() << endl; break;
            case 6: cout << "Average: " << a.average() << endl; break;
            case 7: cout << "Maximum: " << a.getMaximum() << endl; break;
            case 8: cout << "Minimum: " << a.getMinimum() << endl; break;
            case 9: cout << "Second Maximum: " << a.getSecondMaximum() << endl; break;
            case 10: cout << "Second Minimum: " << a.getSecondMinimum() << endl; break;
            case 11: cout << "Third Maximum: " << a.getThirdMaximum() << endl; break;
            case 12: if (!a.search()) cout << "Element not found!\n"; break;
            case 13: cout << "Count: " << a.count() << endl; break;
            case 14: a.append(); break;
            case 15: a.prepend(); break;
            case 16: a.insertAt(); break;
            case 17: a.deleteAt(); break;
            case 18: a.deleteMaximum(); break;
            case 19: a.deleteMinimum(); break;
            case 20: a.deleteSecondMaximum(); break;
            case 21: a.deleteSecondMinimum(); break;
            case 22: a.bubbleSort(); break;
            case 23: a.selectionSort(); break;
            case 24: a.insertionSort(); break;
            case 25: cout << "Is sorted? " << (a.isSorted() ? "Yes" : "No") << endl; break;
            case 26: a.reverseArray(); break;
            case 27: a.reverseInGroups(); break;
            case 28: { int k; cout << "Enter k: "; cin >> k; a.rotateLeft(k); break; }
            case 29: { int k; cout << "Enter k: "; cin >> k; a.rotateRight(k); break; }
            case 30: a.moveZerosToEnd(); break;
            case 31: a.rearrange(); break;
            case 32: a.twoSum(); break;
            case 33: cout << "Max Subarray Sum: " << a.maxSubarraySum() << endl; break;
            case 34: cout << "Most Frequent: " << a.mostFrequent() << endl; break;
            case 35: a.findMissingElements(); break;
            case 36: a.countEvenOdd(); break;
            case 37: a.checkDuplicates(); break;
            case 38: a.removeDuplicates(); break;
            case 39: a.frequencyTable(); break;
            case 40: cout << "Is palindrome? " << (a.isPalindrome() ? "Yes" : "No") << endl; break;
            case 41: a.subArraySum(); break;
            case 42: cout << "Median: " << a.findMedian() << endl; break;
            case 43: cout << "Mode: " << a.findMode() << endl; break;
            case 44: a.printSubarrays(); break;
            case 45: { int n; cout << "Enter n: "; cin >> n; cout << "Is permutation? " << (a.isPermutation(n) ? "Yes" : "No") << endl; break; }
            case 0: cout << "\nThank you!\n"; break;
            default: cout << "Invalid choice!\n";
        }
        
    } while(choice != 0);
    
    return 0;
}