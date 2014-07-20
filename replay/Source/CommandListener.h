//
//  CommandListener.h
//  MacDerbyReplay
//
//  Created by Jeff Piazza on 7/17/14.
//  Copyright (c) 2014 Jeff Piazza. All rights reserved.
//

// This class is the delegate for GCDAsyncSocket, and handles
// listening and responding to commands sent via TCP socket.

#import <Foundation/Foundation.h>
#import "GCDAsyncSocket.h"
#import "AppDelegate.h"

@interface CommandListener : NSObject
{
	dispatch_queue_t socketQueue;
	
	GCDAsyncSocket *listenSocket;
	NSMutableArray *connectedSockets;
	
	BOOL isRunning;
}

@property (weak) AppDelegate* appDelegate;

- (id)initWithDelegate: (AppDelegate*) theAppDelegate;
- (void) startOnPort: (int) port;
- (void) stop;

@end