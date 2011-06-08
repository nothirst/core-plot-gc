
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

///	@file

typedef NSImage CPNativeImage;	///< Platform-native image format.

/**	@brief Node in a linked list of graphics contexts.
 **/
@interface CPContextNode : NSObject {
@private
	NSGraphicsContext *_context;			///< The graphics context.
    CPContextNode *_nextNode;	///< Pointer to the next node in the list.
}

@property (retain, nonatomic) NSGraphicsContext *context;
@property (retain, nonatomic) CPContextNode *nextNode;

@end
