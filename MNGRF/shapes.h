#include <vector>
#include "point3d.h"
#include "types.h"

std::vector<Point3D> Cube{Point3D(-1,-1,-1), Point3D(-1,-1,1),
                          Point3D(1,-1,-1),  Point3D(-1,1,-1),
                          Point3D(-1,1,1),   Point3D(1,-1,1),
                          Point3D(1,1,-1),   Point3D(1,1,1)};

std::vector<Types::Edge> CubeEdges = {Types::Edge(0, 1), Types::Edge(0, 2), Types::Edge(0, 3),
                                      Types::Edge(2,5), Types::Edge(3,6), Types::Edge(3,4),
                                      Types::Edge(4,7), Types::Edge(6,7), Types::Edge(7,5),
                                      Types::Edge(5,1), Types::Edge(4,1), Types::Edge(2,6)};