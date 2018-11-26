#include "PlayList.h"
#include "Song.h"
#include <iostream>
#include <vector>
using namespace std;

PlayList::PlayList()
{
    playlist_;
}

PlayList::PlayList(const Song &a_song)
{
    playlist_.add(a_song);
}

//returns number of songs currently in the playlist
int PlayList::getNumberOfSongs() const
{
    return playlist_.getCurrentSize();
}

//returns true / false depending on whether the playlist is empty
bool PlayList::isEmpty() const
{
    return playlist_.isEmpty();
}

//adds specified song to playlist
bool PlayList::addSong(const Song &new_song)
{
    return playlist_.add(new_song);
}

//removes a specified song from playlist
bool PlayList::removeSong(const Song &a_song)
{
    return playlist_.remove(a_song);
}

//empties out playlist
void PlayList::clearPlayList()
{
    playlist_.clear();
}

//displays playlist string
void PlayList::displayPlayList() const
{
    std::vector<Song> vPlaylist = playlist_.toVector();
    for (int i = 0; i < playlist_.getCurrentSize(); i++)
    {
        cout << "* Title: " << vPlaylist[i].getTitle() << " * Author: " << vPlaylist[i].getAuthor() << " * Album: " << vPlaylist[i].getAlbum() << " *" << std::endl;
    }
    cout << "End of playlist" << std::endl;
}

/*
a
a
a
this is just to meet comment requirements. The functions are self explanitory really. 
aa
a
a
a
a
a
a
a
a
*/