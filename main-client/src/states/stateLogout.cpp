#include "../../include/states.h"

namespace FluffyMultiplayer
{
  StateLogout::StateLogout()
  {
    std::string fontPath = MC_PATH_TO_FONTS MC_DEFAULT_FONT;
    initSimpleText(fontPath, "Are you sure to logout?");
    setSimpleTextPosition(395.0, 300.0);
    buttonConfirm.init("Logout", 340.0,370.0, sf::Color::White,sf::Color::White, 60,30, 22);
    buttonCancel.init("Cancel", 540.0,370.0, sf::Color::White,sf::Color::White, 60,30, 22);
  }

  StateLogout::~StateLogout()
  {

  }

  void StateLogout::render(sf::RenderWindow& window)
  {
    window.draw(theText);
    buttonConfirm.render(window);
    buttonCancel.render(window);
  }


  FluffyMultiplayer::AppState* StateLogout::update(FluffyMultiplayer::App& app,
                    std::queue<std::string>& receiveDataQueue,
                    std::queue<std::string>& sendDataQueue)

  {
    return this;
  }


  FluffyMultiplayer::AppState* StateLogout::eventHandle(FluffyMultiplayer::App& app,
                            sf::Event& event)
  {
    //mouse realtime
    if(event.type == sf::Event::MouseButtonPressed)
    {
        mousePosition = app.appWindow.mapPixelToCoords(sf::Mouse::getPosition(app.appWindow));

        if(buttonConfirm.getButtonBound().contains(mousePosition))
        {
          app.clearIdentity();
          return new FluffyMultiplayer::StateLoginForm;
        }
        else if(buttonCancel.getButtonBound().contains(mousePosition))
        {
          return new FluffyMultiplayer::StateMainPage;
        }
    }

    switch(event.type)
    {
      //keyboard
      case sf::Event::KeyPressed:
        {
          if(event.key.code == sf::Keyboard::Enter || event.key.code == sf::Keyboard::Return)
          {
            app.clearIdentity();
            return new FluffyMultiplayer::StateLoginForm;
          }
          else
          {
            return new FluffyMultiplayer::StateMainPage;
          }
        }
        break;
    }
    return this;
  }
}
