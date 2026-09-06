#pragma once
#include <text.hpp>

class TextObjectGLCore : public TextObjectBase {
  protected:
    void uploadAtlas(FontGeneration &gen) override;

  public:
    TextObjectGLCore(std::string txt, double posX, double posY, std::string fontPath = "");
    ~TextObjectGLCore() override = default;

    void render(int xPos, int yPos) override;
};
