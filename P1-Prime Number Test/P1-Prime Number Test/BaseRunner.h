#include <SFML/Graphics.hpp>
#include <vector>
#include "PrimeChecker.h"

using namespace std;
class BaseRunner : private sf::NonCopyable
{
public:
	static const sf::Time	TIME_PER_FRAME;
	static const int WINDOW_WIDTH = 1920;
	static const int WINDOW_HEIGHT = 1080;

	BaseRunner();
	void run();

private:
	
	sf::RenderWindow window;

	void render();
	void displayDivisorsPerThread();
	void processEvents();
	void update(sf::Time elapsedTime);

	vector<PrimeChecker*>checkerThreadList;

	int nThreads = 0;
	int testNumber = 0;
	bool isAPrimeNumber = false;
};


