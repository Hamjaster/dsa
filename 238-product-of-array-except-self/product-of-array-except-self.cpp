class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
   
      
  int n = nums.size();
  vector<int> prefixes(n, 1); // there wud be n elements, every elemen initialized with 1
  vector<int> suffixes(n, 1);
  vector<int> answers(n, 1);

  // setting prefixes
  prefixes[0]  = 1;
  cout << "Prefixes :-";
  for (int i = 1; i < n; i++)
  {
    prefixes[i] = nums[i - 1] * prefixes[i - 1];
    cout << prefixes[i] << " - ";
  };
  cout << endl;

  suffixes[n - 1] = 1;

  cout << "Suffixes :-";
  for (int i = n - 2; i >= 0; i--)
  {
    suffixes[i] =nums[i + 1] * suffixes[i + 1];
    cout << suffixes[i] << " - ";
  };
  cout << endl;
  cout << "Answers :-";
  for (int i = 0; i < n; i++)
  {
    answers[i] = prefixes[i] * suffixes[i];
    cout << answers[i] << " - ";
  };

  return answers;
    }
};