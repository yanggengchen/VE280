#include <iostream>

using namespace std;

int main() {
	list_t list1, list2, list3, list4, list5, list6, list7, list_dup, list_non_inc, list_dup_noninc;
	list_t ans1_2,ans2_3, ans3_4, ans1_5;
	for (int i = 0; i < 5; i++) {
		list1 = list_make(i, list1);
		list5 = list_make(i, list5);
	}
	for (int i = 0; i < 3; i++) {
		list2 = list_make(i, list2);
		list6 = list_make(i, list6);
	}
	for (int i = 0; i < 10; i++) {
		list3 = list_make(i, list3);
		list7 = list_make(i, list7);
	}
	for (int i = 0; i < 15; i++) {
		list4 = list_make(i, list4);
	}
	ans1_5 = list_make();
	for (int i = 3; i < 5; i++) {
		ans1_2 = list_make(i, ans1_2);
	}
	for (int i = 5; i < 10; i++) {
		ans2_3 = list_make(i, ans2_3);
	}
	for (int i = 10; i < 15; i++) {
		ans3_4 = list_make(i, ans3_4);
	}
	for (int i = 0; i < 5; i++) {
		list_dup = list_make(1, list_dup);
	}
	for (int i = 0; i < 5; i++) {
		list_non_inc = list_make(10 - i, list_non_inc);
	}
	for (int i = 0; i < 5; i++) {
		list_dup_noninc = list_make(10 - i, list_dup_noninc);
		list_dup_noninc = list_make(10 - i, list_dup_noninc);
	}
	try {
		countDifference(list1, list2);
		list_print(ans1_2);
		countDifference(list2, list3);
		list_print(ans2_3);
		countDifference(list3, list4);
		list_print(ans3_4);
		countDifference(list1, list5);
		list_print(ans1_5);
		countDifference(list2, list6);
		list_print(ans1_5);
		countDifference(list3, list7);
		list_print(ans1_5);
		countDifference(list1, list_dup);
		countDifference(list1, list_non_inc);
		countDifference(list1, list_dup_noninc);
	}
	catch(string str){
		cout << str << endl;
	}
}