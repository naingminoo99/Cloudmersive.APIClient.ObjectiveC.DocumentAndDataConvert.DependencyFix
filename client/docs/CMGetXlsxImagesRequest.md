# CMGetXlsxImagesRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**inputFileBytes** | **NSData*** | Optional: Bytes of the input file to operate on | [optional] 
**inputFileUrl** | **NSString*** | Optional: URL of a file to operate on as input.  This can be a public URL, or you can also use the begin-editing API to upload a document and pass in the secure URL result from that operation as the URL here (this URL is not public). | [optional] 
**worksheetToQuery** | [**CMXlsxWorksheet***](CMXlsxWorksheet.md) | Optional; Worksheet (tab) within the spreadsheet to get the images of; leave blank to default to the first worksheet | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

