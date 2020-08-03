#define Dt int //Datatype int,long long,string,etc.
#define T vector<Dt>;

vector<T> permutations(T v) {
	vector<T> ans;
	sort(v.begin(), v.end());
	do ans.push_back(v);
	while (next_permutation(v.begin(), v.end()));
	return ans;
}
