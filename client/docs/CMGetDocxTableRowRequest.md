# CMGetDocxTableRowRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**inputFileBytes** | **NSData*** | Optional: Bytes of the input file to operate on | [optional] 
**inputFileUrl** | **NSString*** | Optional: URL of a file to operate on as input.  This can be a public URL, or you can also use the begin-editing API to upload a document and pass in the secure URL result from that operation as the URL here (this URL is not public). | [optional] 
**tablePath** | **NSString*** | Path to the table to retrievew the row from | [optional] 
**tableRowRowIndex** | **NSNumber*** | 0-based index of the row to retrieve (e.g. 0, 1, 2, ...) in the table | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)

