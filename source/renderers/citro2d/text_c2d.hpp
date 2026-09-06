#pragma once
#include <citro2d.h>
#include <citro3d.h>
#include <text.hpp>

class TextObjectC2D : public TextObjectBase {
  protected:
    void uploadAtlas(FontGeneration &gen) override;

  public:
    TextObjectC2D(std::string txt, double posX, double posY, std::string fontPath = "");
    ~TextObjectC2D() override = default;

    void render(int xPos, int yPos) override;
};
