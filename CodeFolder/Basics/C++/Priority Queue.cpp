struct Object {
  int x, y;
};

int main() {
  // Comparison function cmp for objects
  auto cmp = [](const Object &a, const Object &b) {
    return a.x > b.x;
  };
  // Comparison function cmpd for datatypes
  auto cmpd = [](const int &a, const int &b) {
    return a > b;
  };
  // For object
  priority_queue<Object, vector<Object>,
                 decltype(cmp)> pq(cmp);
  // For datatypes
  priority_queue<int, vector<int>,
		 decltype(cmpd)> pq(cmpd);
}