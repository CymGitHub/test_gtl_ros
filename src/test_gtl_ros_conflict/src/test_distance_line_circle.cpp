

// C++
#include <iostream>
#include <unistd.h>

#include <GTL/Mathematics/Distance/3D/DistLine3Circle3.h>

#include "test_distance_line_circle.h"
using namespace std;

void Distance_line_circle::get(){

  gtl::Vector<double, 3> direction = { 1.0, 1.0, 0.0 };
  gtl::Normalize(direction);
  gtl::Line3<double> line({ 1.0, 1.0, -0.0 }, direction);
  gtl::Normalize(line.direction);
  gtl::Circle3<double> circle({ -1.0, 2.0, -0.0 }, direction, 10.0);
  gtl::Normalize(circle.normal);

  gtl::DCPQuery<double, gtl::Line3<double>, gtl::Circle3<double>> distLC{};
  auto LCOutput = distLC(line, circle);


//    auto LCOutput = distLC.Robust(line, circle);

    cout << "direction  " << std::endl;
    for (size_t i=0; i<direction.size(); ++i) {
      cout << direction[i] << "  ";
    }
    cout << endl;


    cout << "LCOutput.lineClosest  " << std::endl;
    for (size_t i=0; i<LCOutput.lineClosest[0].size(); ++i) {
      cout << LCOutput.lineClosest[0][i] << "  ";
    }

    cout << endl;

    cout << "LCOutput.circleClosest  " << std::endl;
    for (size_t i=0; i<LCOutput.circleClosest[0].size(); ++i) {
      cout << LCOutput.circleClosest[0][i] << "  ";
    }
    cout << endl;

    cout << "LCOutput.distance:  " << LCOutput.distance << std::endl;
}









//using namespace std;

//int main()
//{
////    gtl::Vector<double, 3> direction = {1,1,0};

////    gtl::Normalize(direction);

////    gtl::Line3<double> line({1,1,-0}, direction);
////    gtl::Normalize(line.direction);

////    gtl::Circle3<double> circle({-1,2,-0}, direction, 10);
////    gtl::Normalize(circle.normal);

////    gtl::DCPQuery<double, gtl::Line3<double>, gtl::Circle3<double>> distLC;

////    auto LCOutput = distLC(line, circle);

//  gtl::Vector<double, 3> direction = { 1.0, 1.0, 0.0 };
//  gtl::Normalize(direction);
//  gtl::Line3<double> line({ 1.0, 1.0, -0.0 }, direction);
//  gtl::Normalize(line.direction);
//  gtl::Circle3<double> circle({ -1.0, 2.0, -0.0 }, direction, 10.0);
//  gtl::Normalize(circle.normal);
//  gtl::DCPQuery<double, gtl::Line3<double>, gtl::Circle3<double>> distLC{};
//  auto LCOutput = distLC(line, circle);


////    auto LCOutput = distLC.Robust(line, circle);


//    cout << "direction  " << std::endl;
//    for (size_t i=0; i<direction.size(); ++i) {
//      cout << direction[i] << "  ";
//    }
//    cout << endl;


//    cout << "LCOutput.lineClosest  " << std::endl;
//    for (size_t i=0; i<LCOutput.lineClosest[0].size(); ++i) {
//      cout << LCOutput.lineClosest[0][i] << "  ";
//    }

//    cout << endl;

//    cout << "LCOutput.circleClosest  " << std::endl;
//    for (size_t i=0; i<LCOutput.circleClosest[0].size(); ++i) {
//      cout << LCOutput.circleClosest[0][i] << "  ";
//    }
//    cout << endl;

//    cout << "LCOutput.distance:  " << LCOutput.distance << std::endl;

//  return 0;
//}

