#import <Foundation/Foundation.h>
#import "CPLayer.h"

@class CPAxis;

@interface CPGridLines : CPLayer {
@private
	CPAxis *axis;
	BOOL major;
}

@property (nonatomic, readwrite, assign) CPAxis *axis;
@property (nonatomic, readwrite) BOOL major;

@end
