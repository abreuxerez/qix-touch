//
//  BoardLayer.h
//  qix
//
//  Created by Patrick Huesler on 20.12.12.
//
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "CCMutableTexture2D.h"
#import "QixLine.h"

typedef enum { kLeft, kRight, kUp, kDown} QixNavigationDirection;

@interface BoardLayer : CCLayerColor

@property (atomic) CGPoint start;
@property (atomic) CGPoint end;
@property (atomic) CGPoint uncorrectedEnd;
@property (atomic) CGRect border;
@property (atomic) QixNavigationDirection currentDirection;
@property (atomic) BOOL pressed;
@property (atomic, strong) NSMutableArray * lines;
@property (atomic, strong) NSMutableArray * linesBeingDrawn;
@property (atomic, strong) NSMutableArray * pixels;
@property (atomic, strong) NSMutableArray * tilesGrid;
@property (atomic, strong) CCMutableTexture2D * drawingBoard;



@end
