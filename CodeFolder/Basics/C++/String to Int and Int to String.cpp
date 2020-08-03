int main() {
  // String to Int
  int n = stoi("123") + 1;
  cout << n << endl;  // output: 124
  // stoll for long long int
  // stoull for unsigned long int
  // stod for double
  // stold for long double
  
  // Int to String
  // to_string converts int, double, long long int, etc. to string
  string str = "str+" + to_string(123 + 1);
  cout << str << endl;  // output: str+124
  return 0;
}
