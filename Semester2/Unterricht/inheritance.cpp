#include <iostream>

class shape {
public:
  void set_width(float width_in) { width = width_in; }
  void set_height(float height_in) { height = height_in; }

protected:
  float width;
  float height;
};

class PaintCost {
public:
  auto get_cost(float area) -> float { return (area * 70); }

protected:
  float area;
};

class triangle : public shape, public PaintCost {
public:
  auto get_area() -> float {
    area = 0.5 * (float)width * (float)height;
    return (area);
  }

protected:
  float area;
};

auto main() -> int {
  triangle Zven;
  Zven.set_width(8.6);
  Zven.set_height(5.1);

  double area = Zven.get_area();

  std::cout << "Fläche: " << Zven.get_area() << std::endl;
  std::cout << "Kosten: " << Zven.get_cost(area) << std::endl;
  return 0;
}