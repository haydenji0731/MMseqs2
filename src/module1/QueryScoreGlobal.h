//
//  QueryScoreGlobal.h
//  kClust2_xcode
//
//  Created by Martin Steinegger on 03.06.13.
//  Copyright (c) 2013 Martin Steinegger. All rights reserved.
//

#ifndef QUERYSCOREGLOBAL_H
#define QUERYSCOREGLOBAL_H

#include "QueryScore.h"

class QueryScoreGlobal : public QueryScore {
    
public:
    QueryScoreGlobal(int dbSize, float prefThreshold)
    : QueryScore(dbSize,prefThreshold)    // Call the QueryScore constructor 
    {};
    
    void addScores (int* seqList, int seqListSize, unsigned short score);
    void reset();

};
#endif /* defined(QUERYSCOREGLOBAL_H) */
