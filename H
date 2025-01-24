<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Access Request</title>
</head>
<body>
  <h1>Access Camera and Location</h1>
  <button onclick="requestCamera()">Request Camera Access</button>
  <button onclick="requestLocation()">Request Location Access</button>
  
  <script>
    // Request Camera Access
    function requestCamera() {
      navigator.mediaDevices.getUserMedia({ video: true })
        .then(stream => {
          alert("Camera access granted!");
        })
        .catch(error => {
          alert("Camera access denied: " + error.message);
        });
    }

    // Request Location Access
    function requestLocation() {
      navigator.geolocation.getCurrentPosition(
        position => {
          alert(`Location: Latitude ${position.coords.latitude}, Longitude ${position.coords.longitude}`);
        },
        error => {
          alert("Location access denied: " + error.message);
        }
      );
    }
  </script>
</body>
</html>
