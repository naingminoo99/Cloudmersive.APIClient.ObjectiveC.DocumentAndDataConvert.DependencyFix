#import <Foundation/Foundation.h>
#import "CMHtmlMdResult.h"
#import "CMHtmlToOfficeRequest.h"
#import "CMHtmlToPdfRequest.h"
#import "CMHtmlToPngRequest.h"
#import "CMHtmlToTextRequest.h"
#import "CMHtmlToTextResponse.h"
#import "CMScreenshotRequest.h"
#import "CMUrlToPdfRequest.h"
#import "CMUrlToTextRequest.h"
#import "CMUrlToTextResponse.h"
#import "CMApi.h"

/**
* convertapi
* Convert API lets you effortlessly convert file formats and types.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface CMConvertWebApi: NSObject <CMApi>

extern NSString* kCMConvertWebApiErrorDomain;
extern NSInteger kCMConvertWebApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(CMApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Convert HTML to Word DOCX Document
/// Convert HTML to Office Word Document (DOCX) format
///
/// @param inputRequest HTML input to convert to DOCX
/// 
///  code:200 message:"OK"
///
/// @return NSData*
-(NSURLSessionTask*) convertWebHtmlToDocxWithInputRequest: (CMHtmlToOfficeRequest*) inputRequest
    completionHandler: (void (^)(NSData* output, NSError* error)) handler;


/// Convert HTML string to PDF
/// Fully renders a website and returns a PDF of the HTML.  Javascript, HTML5, CSS and other advanced features are all supported.
///
/// @param input HTML to PDF request parameters
/// 
///  code:200 message:"OK"
///
/// @return NSData*
-(NSURLSessionTask*) convertWebHtmlToPdfWithInput: (CMHtmlToPdfRequest*) input
    completionHandler: (void (^)(NSData* output, NSError* error)) handler;


/// Convert HTML string to PNG screenshot
/// Fully renders a website and returns a PNG (screenshot) of the HTML.  Javascript, HTML5, CSS and other advanced features are all supported.
///
/// @param input HTML to PNG request parameters
/// 
///  code:200 message:"OK"
///
/// @return NSData*
-(NSURLSessionTask*) convertWebHtmlToPngWithInput: (CMHtmlToPngRequest*) input
    completionHandler: (void (^)(NSData* output, NSError* error)) handler;


/// Convert HTML string to text (txt)
/// Converts an HTML string input into text (txt); extracts text from HTML
///
/// @param input HTML to Text request parameters
/// 
///  code:200 message:"OK"
///
/// @return CMHtmlToTextResponse*
-(NSURLSessionTask*) convertWebHtmlToTxtWithInput: (CMHtmlToTextRequest*) input
    completionHandler: (void (^)(CMHtmlToTextResponse* output, NSError* error)) handler;


/// Convert Markdown to HTML
/// Convert a markdown file (.md) to HTML
///
/// @param inputFile Input file to perform the operation on.
/// 
///  code:200 message:"OK"
///
/// @return CMHtmlMdResult*
-(NSURLSessionTask*) convertWebMdToHtmlWithInputFile: (NSURL*) inputFile
    completionHandler: (void (^)(CMHtmlMdResult* output, NSError* error)) handler;


/// Convert a URL to PDF
/// Fully renders a website and returns a PDF of the full page.  Javascript, HTML5, CSS and other advanced features are all supported.
///
/// @param input URL to PDF request parameters
/// 
///  code:200 message:"OK"
///
/// @return NSData*
-(NSURLSessionTask*) convertWebUrlToPdfWithInput: (CMUrlToPdfRequest*) input
    completionHandler: (void (^)(NSData* output, NSError* error)) handler;


/// Take screenshot of URL
/// Fully renders a website and returns a PNG screenshot of the full page image.  Javascript, HTML5, CSS and other advanced features are all supported.
///
/// @param input Screenshot request parameters
/// 
///  code:200 message:"OK"
///
/// @return NSData*
-(NSURLSessionTask*) convertWebUrlToScreenshotWithInput: (CMScreenshotRequest*) input
    completionHandler: (void (^)(NSData* output, NSError* error)) handler;


/// Convert website URL page to text (txt)
/// Converts a website URL page into text (txt); extracts text from HTML
///
/// @param input HTML to Text request parameters
/// 
///  code:200 message:"OK"
///
/// @return CMUrlToTextResponse*
-(NSURLSessionTask*) convertWebUrlToTxtWithInput: (CMUrlToTextRequest*) input
    completionHandler: (void (^)(CMUrlToTextResponse* output, NSError* error)) handler;



@end
