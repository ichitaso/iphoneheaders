/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLFrameBufferTextureConfig, TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLShader;

@interface TSDGLEdgeDistanceField : NSObject {

	unsigned _inputTexture;
	CGSize _textureSize;
	CGSize _squareSize;
	TSDGLFrameBufferTextureConfig* _framebufferTextureConfig;
	TSDGLFrameBuffer* _exteriorFramebuffer;
	TSDGLFrameBuffer* _interiorFramebuffer;
	TSDGLDataBuffer* _rectDataBuffer;
	TSDGLDataBuffer* _squareDataBuffer;
	TSDGLShader* _drawShader;
	TSDGLShader* _combineShader;
	TSDGLShader* _seedShader;
	TSDGLShader* _floodShader;
	TSDGLShader* _gradientShader;
	int _oldViewport[4];

}
+(unsigned)distanceFieldTextureWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 maxDistance:(double)arg3 ;
-(id)initWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(void)p_writeIntoSquareTexture;
-(void)p_seedTextureFromTexture:(unsigned)arg1 invertSeed:(bool)arg2 ;
-(void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(double)arg2 ;
-(unsigned)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 ;
-(unsigned)p_gradientTextureFromCombinedTexture:(unsigned)arg1 withCurrentGLFramebuffer:(int)arg2 ;
-(void)dealloc;
-(void)teardown;
@end
