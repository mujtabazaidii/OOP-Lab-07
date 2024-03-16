#include<iostream>
using namespace std;
class GraduateCourse {
	string CourseId, CourseName;
	int CreditHrs, CourseFee;
public:
	GraduateCourse(string a = "", string b = "", int c = 0, int d = 0) {
		CourseId = a;
		CourseName = b;
		CreditHrs = c;
		CourseFee = d;
	}
	void setCourseID(string a) {
		CourseId = a;
	}
	void setCourseName(string b) {
		CourseName = b;
	}
	void setCreditHrs(int c) {
		CreditHrs = c;
	}
	void setCourseFee(int d) {
		CourseFee = d;
	}
	string getCourseName() {
		return CourseName;
	}
	string getCourseId() {
		return CourseId;
	}
	int getCreditHrs() {
		return CreditHrs;
	}
	int getCourseFee() {
		return CourseFee;
	}
	void Display() {
		cout << "Course Id : " << getCourseId() << endl;
		cout << "Course Name : " << getCourseName() << endl;
		cout << "Credit Hours : " << getCreditHrs() << endl;
		cout << "Course Fee : " << getCourseFee() << endl;
	}
};
class ResearchCourse :public GraduateCourse {
	int ExperimentFee;
public:
	ResearchCourse(string a, string b, int c, int d, int e) :GraduateCourse(a, b, c, d) {
		ExperimentFee = e;
	}
	void setExperimentFee(int e) {
		ExperimentFee = e;
	}
	int getExperimentFee() {
		return ExperimentFee;
	}
	void Display1() {
		cout << "Course Id : " << getCourseId() << endl;
		cout << "Course Name : " << getCourseName() << endl;
		cout << "Credit Hours : " << getCreditHrs() << endl;
		cout << "Course Fee : " << getCourseFee() << endl;
		cout << "Experiment Fee : " << getExperimentFee() << endl;
	}
};
int main() {
	GraduateCourse g1("CS2133", "OOP", 3, 10000);
	g1.Display();
	cout << endl;
	ResearchCourse r1("CS2133", "OOP", 3, 10000, 5000);
	r1.Display1();
	cout << endl;
	return 0;
}