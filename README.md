# Google Cloud Platform C++ Client Libraries

<!-- This file is automatically generated by ci/test-markdown/generate-readme.sh -->

[![GCB CI status][gcb-clang-tidy-shield]][gcb-clang-tidy-link]
[![GCB CI status][gcb-asan-shield]][gcb-asan-link]
[![GHA][gha-shield]][gha-link]
[![Codecov Coverage status][codecov-shield]][codecov-link]

This repository contains idiomatic C++ client libraries for the following
[Google Cloud Platform](https://cloud.google.com/) services.

> Please check the [CHANGELOG] for important announcements and upcoming changes.

## Quickstart

Each library (see below) contains a directory named `quickstart/` that's
intended to help you get up and running in a matter of minutes. This
`quickstart/` directory contains a minimal "Hello World" program demonstrating
how to use the library, along with minimal build files for common build systems,
such as CMake and Bazel.

As an example, the following code snippet, taken from
[Google Cloud Storage](google/cloud/storage/README.md), should give you a sense
of what it's like to use one of these C++ libraries.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/storage/client.h"
#include <iostream>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cerr << "Missing bucket name.\n";
    std::cerr << "Usage: quickstart <bucket-name>\n";
    return 1;
  }
  std::string const bucket_name = argv[1];

  // Create aliases to make the code easier to read.
  namespace gcs = ::google::cloud::storage;

  // Create a client to communicate with Google Cloud Storage. This client
  // uses the default configuration for authentication and project id.
  auto client = gcs::Client();

  auto writer = client.WriteObject(bucket_name, "quickstart.txt");
  writer << "Hello World!";
  writer.Close();
  if (!writer.metadata()) {
    std::cerr << "Error creating object: " << writer.metadata().status()
              << "\n";
    return 1;
  }
  std::cout << "Successfully created object: " << *writer.metadata() << "\n";

  auto reader = client.ReadObject(bucket_name, "quickstart.txt");
  if (!reader) {
    std::cerr << "Error reading object: " << reader.status() << "\n";
    return 1;
  }

  std::string contents{std::istreambuf_iterator<char>{reader}, {}};
  std::cout << contents << "\n";

  return 0;
}
```

<!-- inject-quickstart-end -->

## GA Libraries

See each library's `README.md` file for more information about:

- Where to find the documentation for the library and the service.
- How to get started using the library.
- How to incorporate the library into your build system.
- The library's support status if not Generally Available (GA); unless noted in
  a library's `README.md`, these libraries are all GA and supported by Google.

<details>
<summary>Expand to see the full list of GA libraries</summary>

<!-- inject-GA-features-start -->

- [Access Approval API](google/cloud/accessapproval/README.md)
  [\[quickstart\]](google/cloud/accessapproval/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/accessapproval/latest)
- [Access Context Manager API](google/cloud/accesscontextmanager/README.md)
  [\[quickstart\]](google/cloud/accesscontextmanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/accesscontextmanager/latest)
- [Advisory Notifications API](google/cloud/advisorynotifications/README.md)
  [\[quickstart\]](google/cloud/advisorynotifications/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/advisorynotifications/latest)
- [Vertex AI API](google/cloud/aiplatform/README.md)
  [\[quickstart\]](google/cloud/aiplatform/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/aiplatform/latest)
- [AlloyDB API](google/cloud/alloydb/README.md)
  [\[quickstart\]](google/cloud/alloydb/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/alloydb/latest)
- [API Gateway API](google/cloud/apigateway/README.md)
  [\[quickstart\]](google/cloud/apigateway/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/apigateway/latest)
- [Apigee Connect API](google/cloud/apigeeconnect/README.md)
  [\[quickstart\]](google/cloud/apigeeconnect/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/apigeeconnect/latest)
- [API Keys API](google/cloud/apikeys/README.md)
  [\[quickstart\]](google/cloud/apikeys/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/apikeys/latest)
- [App Engine Admin API](google/cloud/appengine/README.md)
  [\[quickstart\]](google/cloud/appengine/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/appengine/latest)
- [App Hub API](google/cloud/apphub/README.md)
  [\[quickstart\]](google/cloud/apphub/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/apphub/latest)
- [Artifact Registry API](google/cloud/artifactregistry/README.md)
  [\[quickstart\]](google/cloud/artifactregistry/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/artifactregistry/latest)
- [Cloud Asset API](google/cloud/asset/README.md)
  [\[quickstart\]](google/cloud/asset/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/asset/latest)
- [Assured Workloads API](google/cloud/assuredworkloads/README.md)
  [\[quickstart\]](google/cloud/assuredworkloads/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/assuredworkloads/latest)
- [Cloud AutoML API](google/cloud/automl/README.md)
  [\[quickstart\]](google/cloud/automl/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/automl/latest)
- [Backup and DR Service API](google/cloud/backupdr/README.md)
  [\[quickstart\]](google/cloud/backupdr/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/backupdr/latest)
- [Bare Metal Solution API](google/cloud/baremetalsolution/README.md)
  [\[quickstart\]](google/cloud/baremetalsolution/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/baremetalsolution/latest)
- [Batch API](google/cloud/batch/README.md)
  [\[quickstart\]](google/cloud/batch/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/batch/latest)
- [BeyondCorp API](google/cloud/beyondcorp/README.md)
  [\[quickstart\]](google/cloud/beyondcorp/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/beyondcorp/latest)
- [Google Cloud BigQuery](google/cloud/bigquery/README.md)
  [\[quickstart\]](google/cloud/bigquery/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/bigquery/latest)
- [Google Cloud Bigtable](google/cloud/bigtable/README.md)
  [\[quickstart\]](google/cloud/bigtable/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/bigtable/latest)
- [Cloud Billing Budget API](google/cloud/billing/README.md)
  [\[quickstart\]](google/cloud/billing/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/billing/latest)
- [Binary Authorization API](google/cloud/binaryauthorization/README.md)
  [\[quickstart\]](google/cloud/binaryauthorization/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/binaryauthorization/latest)
- [Certificate Manager API](google/cloud/certificatemanager/README.md)
  [\[quickstart\]](google/cloud/certificatemanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/certificatemanager/latest)
- [Cloud Channel API](google/cloud/channel/README.md)
  [\[quickstart\]](google/cloud/channel/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/channel/latest)
- [Cloud Build API](google/cloud/cloudbuild/README.md)
  [\[quickstart\]](google/cloud/cloudbuild/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/cloudbuild/latest)
- [Cloud Controls Partner API](google/cloud/cloudcontrolspartner/README.md)
  [\[quickstart\]](google/cloud/cloudcontrolspartner/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/cloudcontrolspartner/latest)
- [Cloud Quotas API](google/cloud/cloudquotas/README.md)
  [\[quickstart\]](google/cloud/cloudquotas/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/cloudquotas/latest)
- [Cloud Commerce Consumer Procurement API](google/cloud/commerce/README.md)
  [\[quickstart\]](google/cloud/commerce/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/commerce/latest)
- [Cloud Composer](google/cloud/composer/README.md)
  [\[quickstart\]](google/cloud/composer/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/composer/latest)
- [Compute Engine API](google/cloud/compute/README.md)
  [\[quickstart\]](google/cloud/compute/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/compute/latest)
- [Confidential Computing API](google/cloud/confidentialcomputing/README.md)
  [\[quickstart\]](google/cloud/confidentialcomputing/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/confidentialcomputing/latest)
- [Infrastructure Manager API](google/cloud/config/README.md)
  [\[quickstart\]](google/cloud/config/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/config/latest)
- [Connectors API](google/cloud/connectors/README.md)
  [\[quickstart\]](google/cloud/connectors/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/connectors/latest)
- [Contact Center AI Insights API](google/cloud/contactcenterinsights/README.md)
  [\[quickstart\]](google/cloud/contactcenterinsights/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/contactcenterinsights/latest)
- [Kubernetes Engine API](google/cloud/container/README.md)
  [\[quickstart\]](google/cloud/container/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/container/latest)
- [Container Analysis API](google/cloud/containeranalysis/README.md)
  [\[quickstart\]](google/cloud/containeranalysis/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/containeranalysis/latest)
- [Document AI Warehouse API](google/cloud/contentwarehouse/README.md)
  [\[quickstart\]](google/cloud/contentwarehouse/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/contentwarehouse/latest)
- [Google Cloud Data Catalog API](google/cloud/datacatalog/README.md)
  [\[quickstart\]](google/cloud/datacatalog/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/datacatalog/latest)
- [Cloud Data Fusion API](google/cloud/datafusion/README.md)
  [\[quickstart\]](google/cloud/datafusion/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/datafusion/latest)
- [Database Migration API](google/cloud/datamigration/README.md)
  [\[quickstart\]](google/cloud/datamigration/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/datamigration/latest)
- [Cloud Dataplex API](google/cloud/dataplex/README.md)
  [\[quickstart\]](google/cloud/dataplex/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/dataplex/latest)
- [Cloud Dataproc API](google/cloud/dataproc/README.md)
  [\[quickstart\]](google/cloud/dataproc/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/dataproc/latest)
- [Cloud Datastore API](google/cloud/datastore/README.md)
  [\[quickstart\]](google/cloud/datastore/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/datastore/latest)
- [Datastream API](google/cloud/datastream/README.md)
  [\[quickstart\]](google/cloud/datastream/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/datastream/latest)
- [Google Cloud Deploy API](google/cloud/deploy/README.md)
  [\[quickstart\]](google/cloud/deploy/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/deploy/latest)
- [Dialogflow CX API](google/cloud/dialogflow_cx/README.md)
  [\[quickstart\]](google/cloud/dialogflow_cx/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/dialogflow_cx/latest)
- [Dialogflow ES API](google/cloud/dialogflow_es/README.md)
  [\[quickstart\]](google/cloud/dialogflow_es/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/dialogflow_es/latest)
- [Discovery Engine API](google/cloud/discoveryengine/README.md)
  [\[quickstart\]](google/cloud/discoveryengine/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/discoveryengine/latest)
- [Cloud Data Loss Prevention (DLP) API](google/cloud/dlp/README.md)
  [\[quickstart\]](google/cloud/dlp/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/dlp/latest)
- [Cloud Document AI API](google/cloud/documentai/README.md)
  [\[quickstart\]](google/cloud/documentai/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/documentai/latest)
- [Cloud Domains API](google/cloud/domains/README.md)
  [\[quickstart\]](google/cloud/domains/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/domains/latest)
- [Distributed Cloud Edge Container API](google/cloud/edgecontainer/README.md)
  [\[quickstart\]](google/cloud/edgecontainer/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/edgecontainer/latest)
- [Distributed Cloud Edge Network API](google/cloud/edgenetwork/README.md)
  [\[quickstart\]](google/cloud/edgenetwork/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/edgenetwork/latest)
- [Essential Contacts API](google/cloud/essentialcontacts/README.md)
  [\[quickstart\]](google/cloud/essentialcontacts/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/essentialcontacts/latest)
- [Eventarc API](google/cloud/eventarc/README.md)
  [\[quickstart\]](google/cloud/eventarc/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/eventarc/latest)
- [Cloud Filestore API](google/cloud/filestore/README.md)
  [\[quickstart\]](google/cloud/filestore/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/filestore/latest)
- [Cloud Functions API](google/cloud/functions/README.md)
  [\[quickstart\]](google/cloud/functions/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/functions/latest)
- [Backup for GKE API](google/cloud/gkebackup/README.md)
  [\[quickstart\]](google/cloud/gkebackup/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/gkebackup/latest)
- [GKE Hub](google/cloud/gkehub/README.md)
  [\[quickstart\]](google/cloud/gkehub/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/gkehub/latest)
- [Anthos Multi-Cloud API](google/cloud/gkemulticloud/README.md)
  [\[quickstart\]](google/cloud/gkemulticloud/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/gkemulticloud/latest)
- [Google Cloud IAM](google/cloud/iam/README.md)
  [\[quickstart\]](google/cloud/iam/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/iam/latest)
- [Cloud Identity-Aware Proxy API](google/cloud/iap/README.md)
  [\[quickstart\]](google/cloud/iap/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/iap/latest)
- [Cloud IDS API](google/cloud/ids/README.md)
  [\[quickstart\]](google/cloud/ids/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/ids/latest)
- [Cloud Key Management Service (KMS) API](google/cloud/kms/README.md)
  [\[quickstart\]](google/cloud/kms/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/kms/latest)
- [Cloud Natural Language API](google/cloud/language/README.md)
  [\[quickstart\]](google/cloud/language/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/language/latest)
- [Google Cloud Logging](google/cloud/logging/README.md)
  [\[quickstart\]](google/cloud/logging/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/logging/latest)
- [Managed Service for Microsoft Active Directory API](google/cloud/managedidentities/README.md)
  [\[quickstart\]](google/cloud/managedidentities/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/managedidentities/latest)
- [Apache Kafka for BigQuery API](google/cloud/managedkafka/README.md)
  [\[quickstart\]](google/cloud/managedkafka/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/managedkafka/latest)
- [Cloud Memorystore for Memcached API](google/cloud/memcache/README.md)
  [\[quickstart\]](google/cloud/memcache/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/memcache/latest)
- [Dataproc Metastore API](google/cloud/metastore/README.md)
  [\[quickstart\]](google/cloud/metastore/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/metastore/latest)
- [Migration Center API](google/cloud/migrationcenter/README.md)
  [\[quickstart\]](google/cloud/migrationcenter/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/migrationcenter/latest)
- [Cloud Monitoring API](google/cloud/monitoring/README.md)
  [\[quickstart\]](google/cloud/monitoring/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/monitoring/latest)
- [NetApp API](google/cloud/netapp/README.md)
  [\[quickstart\]](google/cloud/netapp/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/netapp/latest)
- [Network Connectivity API](google/cloud/networkconnectivity/README.md)
  [\[quickstart\]](google/cloud/networkconnectivity/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/networkconnectivity/latest)
- [Network Management API](google/cloud/networkmanagement/README.md)
  [\[quickstart\]](google/cloud/networkmanagement/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/networkmanagement/latest)
- [Network Security API](google/cloud/networksecurity/README.md)
  [\[quickstart\]](google/cloud/networksecurity/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/networksecurity/latest)
- [Network Services API](google/cloud/networkservices/README.md)
  [\[quickstart\]](google/cloud/networkservices/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/networkservices/latest)
- [Notebooks API](google/cloud/notebooks/README.md)
  [\[quickstart\]](google/cloud/notebooks/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/notebooks/latest)
- [OAuth2 Access Token Generation](google/cloud/oauth2/README.md)
  [\[quickstart\]](google/cloud/oauth2/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/oauth2/latest)
- [Cloud Optimization API](google/cloud/optimization/README.md)
  [\[quickstart\]](google/cloud/optimization/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/optimization/latest)
- [Organization Policy API](google/cloud/orgpolicy/README.md)
  [\[quickstart\]](google/cloud/orgpolicy/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/orgpolicy/latest)
- [OS Config API](google/cloud/osconfig/README.md)
  [\[quickstart\]](google/cloud/osconfig/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/osconfig/latest)
- [Cloud OS Login API](google/cloud/oslogin/README.md)
  [\[quickstart\]](google/cloud/oslogin/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/oslogin/latest)
- [Policy Simulator API](google/cloud/policysimulator/README.md)
  [\[quickstart\]](google/cloud/policysimulator/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/policysimulator/latest)
- [Policy Troubleshooter API](google/cloud/policytroubleshooter/README.md)
  [\[quickstart\]](google/cloud/policytroubleshooter/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/policytroubleshooter/latest)
- [Certificate Authority API](google/cloud/privateca/README.md)
  [\[quickstart\]](google/cloud/privateca/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/privateca/latest)
- [Privileged Access Manager API](google/cloud/privilegedaccessmanager/README.md)
  [\[quickstart\]](google/cloud/privilegedaccessmanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/privilegedaccessmanager/latest)
- [Cloud Profiler API](google/cloud/profiler/README.md)
  [\[quickstart\]](google/cloud/profiler/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/profiler/latest)
- [Public Certificate Authority API](google/cloud/publicca/README.md)
  [\[quickstart\]](google/cloud/publicca/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/publicca/latest)
- [Google Cloud Pub/Sub](google/cloud/pubsub/README.md)
  [\[quickstart\]](google/cloud/pubsub/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/pubsub/latest)
- [Rapid Migration Assessment API](google/cloud/rapidmigrationassessment/README.md)
  [\[quickstart\]](google/cloud/rapidmigrationassessment/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/rapidmigrationassessment/latest)
- [reCAPTCHA Enterprise API](google/cloud/recaptchaenterprise/README.md)
  [\[quickstart\]](google/cloud/recaptchaenterprise/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/recaptchaenterprise/latest)
- [Recommender](google/cloud/recommender/README.md)
  [\[quickstart\]](google/cloud/recommender/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/recommender/latest)
- [Google Cloud Memorystore for Redis API](google/cloud/redis/README.md)
  [\[quickstart\]](google/cloud/redis/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/redis/latest)
- [Cloud Resource Manager API](google/cloud/resourcemanager/README.md)
  [\[quickstart\]](google/cloud/resourcemanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/resourcemanager/latest)
- [Resource Settings API](google/cloud/resourcesettings/README.md)
  [\[quickstart\]](google/cloud/resourcesettings/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/resourcesettings/latest)
- [Retail API](google/cloud/retail/README.md)
  [\[quickstart\]](google/cloud/retail/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/retail/latest)
- [Cloud Run Admin API](google/cloud/run/README.md)
  [\[quickstart\]](google/cloud/run/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/run/latest)
- [Cloud Scheduler API](google/cloud/scheduler/README.md)
  [\[quickstart\]](google/cloud/scheduler/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/scheduler/latest)
- [Secret Manager API](google/cloud/secretmanager/README.md)
  [\[quickstart\]](google/cloud/secretmanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/secretmanager/latest)
- [Secure Source Manager API](google/cloud/securesourcemanager/README.md)
  [\[quickstart\]](google/cloud/securesourcemanager/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/securesourcemanager/latest)
- [Security Command Center API](google/cloud/securitycenter/README.md)
  [\[quickstart\]](google/cloud/securitycenter/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/securitycenter/latest)
- [Security Center Management API](google/cloud/securitycentermanagement/README.md)
  [\[quickstart\]](google/cloud/securitycentermanagement/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/securitycentermanagement/latest)
- [Service Control API](google/cloud/servicecontrol/README.md)
  [\[quickstart\]](google/cloud/servicecontrol/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/servicecontrol/latest)
- [Service Directory API](google/cloud/servicedirectory/README.md)
  [\[quickstart\]](google/cloud/servicedirectory/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/servicedirectory/latest)
- [Service Health API](google/cloud/servicehealth/README.md)
  [\[quickstart\]](google/cloud/servicehealth/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/servicehealth/latest)
- [Service Management API](google/cloud/servicemanagement/README.md)
  [\[quickstart\]](google/cloud/servicemanagement/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/servicemanagement/latest)
- [Service Usage API](google/cloud/serviceusage/README.md)
  [\[quickstart\]](google/cloud/serviceusage/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/serviceusage/latest)
- [Cloud Shell API](google/cloud/shell/README.md)
  [\[quickstart\]](google/cloud/shell/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/shell/latest)
- [Google Cloud Spanner](google/cloud/spanner/README.md)
  [\[quickstart\]](google/cloud/spanner/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/spanner/latest)
- [Cloud Speech-to-Text API](google/cloud/speech/README.md)
  [\[quickstart\]](google/cloud/speech/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/speech/latest)
- [Cloud SQL Admin API](google/cloud/sql/README.md)
  [\[quickstart\]](google/cloud/sql/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/sql/latest)
- [Google Cloud Storage](google/cloud/storage/README.md)
  [\[quickstart\]](google/cloud/storage/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/storage/latest)
- [Storage Control API](google/cloud/storagecontrol/README.md)
  [\[quickstart\]](google/cloud/storagecontrol/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/storagecontrol/latest)
- [Storage Insights API](google/cloud/storageinsights/README.md)
  [\[quickstart\]](google/cloud/storageinsights/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/storageinsights/latest)
- [Storage Transfer API](google/cloud/storagetransfer/README.md)
  [\[quickstart\]](google/cloud/storagetransfer/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/storagetransfer/latest)
- [Google Cloud Support API](google/cloud/support/README.md)
  [\[quickstart\]](google/cloud/support/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/support/latest)
- [Cloud Talent Solution API](google/cloud/talent/README.md)
  [\[quickstart\]](google/cloud/talent/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/talent/latest)
- [Cloud Tasks API](google/cloud/tasks/README.md)
  [\[quickstart\]](google/cloud/tasks/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/tasks/latest)
- [Telco Automation API](google/cloud/telcoautomation/README.md)
  [\[quickstart\]](google/cloud/telcoautomation/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/telcoautomation/latest)
- [Cloud Text-to-Speech API](google/cloud/texttospeech/README.md)
  [\[quickstart\]](google/cloud/texttospeech/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/texttospeech/latest)
- [Timeseries Insights API](google/cloud/timeseriesinsights/README.md)
  [\[quickstart\]](google/cloud/timeseriesinsights/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/timeseriesinsights/latest)
- [Cloud TPU API](google/cloud/tpu/README.md)
  [\[quickstart\]](google/cloud/tpu/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/tpu/latest)
- [Cloud Trace API](google/cloud/trace/README.md)
  [\[quickstart\]](google/cloud/trace/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/trace/latest)
- [Cloud Translation API](google/cloud/translate/README.md)
  [\[quickstart\]](google/cloud/translate/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/translate/latest)
- [Video Services](google/cloud/video/README.md)
  [\[quickstart\]](google/cloud/video/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/video/latest)
- [Cloud Video Intelligence API](google/cloud/videointelligence/README.md)
  [\[quickstart\]](google/cloud/videointelligence/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/videointelligence/latest)
- [Cloud Vision API](google/cloud/vision/README.md)
  [\[quickstart\]](google/cloud/vision/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/vision/latest)
- [VM Migration API](google/cloud/vmmigration/README.md)
  [\[quickstart\]](google/cloud/vmmigration/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/vmmigration/latest)
- [VMware Engine API](google/cloud/vmwareengine/README.md)
  [\[quickstart\]](google/cloud/vmwareengine/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/vmwareengine/latest)
- [Serverless VPC Access API](google/cloud/vpcaccess/README.md)
  [\[quickstart\]](google/cloud/vpcaccess/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/vpcaccess/latest)
- [Web Risk API](google/cloud/webrisk/README.md)
  [\[quickstart\]](google/cloud/webrisk/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/webrisk/latest)
- [Web Security Scanner API](google/cloud/websecurityscanner/README.md)
  [\[quickstart\]](google/cloud/websecurityscanner/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/websecurityscanner/latest)
- [Workflow Executions API](google/cloud/workflows/README.md)
  [\[quickstart\]](google/cloud/workflows/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/workflows/latest)
- [Cloud Workstations API](google/cloud/workstations/README.md)
  [\[quickstart\]](google/cloud/workstations/quickstart/README.md)
  [\[reference\]](https://cloud.google.com/cpp/docs/reference/workstations/latest)

<!-- inject-GA-features-end -->

</details>

## Building and Installing

This is a quickstart guide for developers wanting to compile the libraries and
run the examples included with the libraries.

- Packaging maintainers or developers who prefer to install the library in a
  fixed directory (such as `/usr/local` or `/opt`) should consult the
  [packaging guide](/doc/packaging.md).
- Developers who prefer using a package manager such as
  [vcpkg](https://vcpkg.io), or [Conda](https://conda.io), should follow the
  instructions for their package manager.
- Developers wanting to use the libraries as part of a larger CMake or Bazel
  project should consult the [quickstart guides](#quickstart) for the library or
  libraries they want to use.
- Developers wanting to compile the library just to run some examples or tests
  should read the current document.
- Contributors and developers to `google-cloud-cpp` should consult the guide to
  [set up a development workstation][howto-setup-dev-workstation].

### Building with Bazel

This library requires Bazel >= 6.0. From the top-level directory, run the usual
commands.

```shell
bazel build //...
```

### Building with CMake

This library requires CMake >= 3.10. If you are planning to install the
libraries please consult the [packaging guide](/doc/packaging.md), these
instructions will **NOT** produce artifacts that you can put in `/usr/local`, or
share with your colleagues.

From the top-level directory of `google-cloud-cpp` run these commands:

```shell
git -C $HOME clone https://github.com/microsoft/vcpkg.git
env VCPKG_ROOT=$HOME/vcpkg $HOME/vcpkg/bootstrap-vcpkg.sh
cmake -S . -B cmake-out/ -DCMAKE_TOOLCHAIN_FILE=$HOME/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build cmake-out -- -j $(nproc)
```

The binary artifacts, such as examples, will be placed in `cmake-out/`.

## Support

- This project follows Google's
  [Foundational C++ Support Policy][support-policy], which is summarized in the
  [Foundational C++ Support Matrix][support-matrix].
  - Language Version (>= C++14).
  - Operating Systems: Windows, macOS, and Linux.
  - Build Systems: Bazel (>= 6.0), CMake (>= 3.10).
  - Compilers: GCC (>= 7.5), Clang (>= 6.0), MSVC (>= 2022), Apple Clang (>=
    12).
- This project uses dependencies described in
  [doc/packaging.md](https://github.com/googleapis/google-cloud-cpp/blob/main/doc/packaging.md).
- This project works with or without exceptions enabled.
- This project cuts
  [monthly releases](https://github.com/googleapis/google-cloud-cpp/releases)
  with detailed release notes.

## Public API and API Breaking Changes

This project follows Google's [OSS Library Breaking Change Policy].

In general, we avoid making backwards incompatible changes to our
[public API](/doc/public-api.md). Sometimes such changes yield benefits to our
customers, in the form of better performance, easier-to-understand APIs, and/or
more consistent APIs across services. When these benefits warrant it, we will:

- Announce these changes prominently in our `CHANGELOG.md` file and in the
  affected release's notes.
- Increase the major version for `google-cloud-cpp`.

Nevertheless, though we take commercially reasonable efforts to prevent this, it
is possible that backwards incompatible changes go undetected and, therefore,
undocumented. We apologize if this is the case and welcome feedback or bug
reports to rectify the problem.

## Contact us

- [GitHub Discussions] -- For questions and general comments
- [GitHub Issues] -- For reporting bugs and feature requests

## Contributing changes

See [`CONTRIBUTING.md`](/CONTRIBUTING.md) for details on how to contribute to
this project, including how to build and test your changes as well as how to
properly format your code.

## Licensing

Apache 2.0; see [`LICENSE`](/LICENSE) for details.

[changelog]: /CHANGELOG.md
[codecov-link]: https://codecov.io/gh/googleapis/google-cloud-cpp
[codecov-shield]: https://codecov.io/gh/googleapis/google-cloud-cpp/branch/main/graph/badge.svg
[gcb-asan-link]: https://storage.googleapis.com/cloud-cpp-community-publiclogs/badges/google-cloud-cpp/main/asan.html
[gcb-asan-shield]: https://storage.googleapis.com/cloud-cpp-community-publiclogs/badges/google-cloud-cpp/main/asan.svg
[gcb-clang-tidy-link]: https://storage.googleapis.com/cloud-cpp-community-publiclogs/badges/google-cloud-cpp/main/clang-tidy.html
[gcb-clang-tidy-shield]: https://storage.googleapis.com/cloud-cpp-community-publiclogs/badges/google-cloud-cpp/main/clang-tidy.svg
[gha-link]: https://github.com/googleapis/google-cloud-cpp/actions/workflows/test-runner.yml
[gha-shield]: https://github.com/googleapis/google-cloud-cpp/actions/workflows/test-runner.yml/badge.svg
[github discussions]: https://github.com/googleapis/google-cloud-cpp/discussions
[github issues]: https://github.com/googleapis/google-cloud-cpp/issues
[howto-setup-dev-workstation]: /doc/contributor/howto-guide-setup-development-workstation.md
[oss library breaking change policy]: https://opensource.google/documentation/policies/library-breaking-change
[support-matrix]: https://github.com/google/oss-policies-info/blob/main/foundational-cxx-support-matrix.md
[support-policy]: https://opensource.google/documentation/policies/cplusplus-support
