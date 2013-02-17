//
//  ikoSyphonServerGLView.h
//  Arkris
//
//  Created by Brian Williams on 17/02/2013.
//  Copyright (c) 2013 Brian Williams. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ikoSyphonServerGLView : NSOpenGLView {
    BOOL needsRebuild;
    id <ikoSyphonServertextureSource> _source;
}

@property (assign, readwrite) id <ikoSyphonServertextureSource> source;

@end
