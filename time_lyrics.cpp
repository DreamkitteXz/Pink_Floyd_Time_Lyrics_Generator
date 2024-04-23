#include <iostream>
#include<windows.h>           // for windows
using namespace std;
string time_lyrics =
    "\033[1;31mTicking away the moments that make up a dull day\033[0m\n"
    "\033[1;44mFritter and waste the hours in an offhand way\033[0m\n"
    "\033[38;2;255;165;0mKicking around on a piece of ground in your hometown\033[0m\n"
    "\033[38;2;255;255;0mWaiting for someone or something to show you the way\033[0m\n"
    "\033[38;2;0;128;0mTired of lying in the sunshine, staying home to watch the rain\033[0m\n"
    "\033[38;2;0;0;255mYou are young and life is long, and there is time to kill today\033[0m\n"
    "\033[38;2;75;0;130mAnd then one day you find ten years have got behind you\033[0m\n"
    "\033[38;2;238;130;238mNo one told you when to run, you missed the starting gun\033[0m\n"
    "\033[38;2;255;0;0mAnd you run, and you run to catch up with the sun but it's sinking\033[0m\n"
    "\033[38;2;255;165;0mRacing around to come up behind you again\033[0m\n"
    "\033[38;2;255;255;0mThe sun is the same in a relative way but you're older\033[0m\n"
    "\033[38;2;0;128;0mShorter of breath and one day closer to death\033[0m\n"
    "\033[38;2;0;0;255mEvery year is getting shorter, never seem to find the time\033[0m\n"
    "\033[38;2;75;0;130mPlans that either come to naught or half a page of scribbled lines\033[0m\n"
    "\033[38;2;238;130;238mHanging on in quiet desperation is the English way\033[0m\n"
    "\033[1;31mThe time is gone, the song is over, thought I'd something more to say\033[0m\n"
    "\033[1;44mHome, home again\033[0m\n"
    "\033[38;2;255;165;0mI like to be here when I can\033[0m\n"
    "\033[38;2;255;255;0mAnd when I come home cold and tired\033[0m\n"
    "\033[38;2;0;128;0mIt's good to warm my bones beside the fire\033[0m\n"
    "\033[38;2;0;0;255mFar away across the field\033[0m\n"
    "\033[38;2;75;0;130mThe tolling of the iron bell\033[0m\n"
    "\033[38;2;238;130;238mCalls the faithful to their knees\033[0m\n"
    "\033[1;31mTo hear the softly spoken magic spells\033[0m\n"
    "                  /\\                        \n"
    "                 /  \\\033[38;2;255;0;0m________________\033[0m\n"
    "   _____________/    \\\033[38;2;255;165;0m_________________\033[0m\n"
    "               /      \\\033[38;2;255;255;0m__________________\033[0m\n"
    "              /        \\\033[38;2;0;128;0m__________________\033[0m\n"
    "             /__________\\\033[38;2;0;0;255m___________________\033[0m\n";


int main()
{
	unsigned long k;
	for (k=0;k<time_lyrics.size();++k) {
    cout << time_lyrics[k]; 
	Sleep(30);
}
	return 0;
}

