#pragma once
#include <text.hpp>

class TextObjectGL : public TextObjectBase {
  protected:
    void uploadAtlas(FontGeneration &gen) override;

  public:
    TextObjectGL(std::string txt, double posX, double posY, std::string fontPath = "");
    ~TextObjectGL() override = default;

    void render(int xPos, int yPos) override;
};
