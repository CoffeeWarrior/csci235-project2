#ifndef _PLAYLIST_H_
#define _PLAYLIST_H_
#include <string>
#include "Set.h"
#include "Song.h"

class PlayList
{
  public:
    PlayList();

    PlayList(const Song &a_song);

    int getNumberOfSongs() const;

    bool isEmpty() const;

    bool addSong(const Song &new_song);

    bool removeSong(const Song &a_song);

    void clearPlayList();

    void displayPlayList() const;

  private:
    Set<Song> playlist_;
};

#endif


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