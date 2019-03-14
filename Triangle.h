// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
   public:
      Triangle(float base, float height);

      float area();
   private:
      float base_;
      float height_;
};

#endif /* TRIANGLE_H */
